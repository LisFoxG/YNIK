#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libpq-fe.h"
#include "softdrink.h"

ExecStatusType get_softdrink(PGconn* conn)
{
        PGresult *res;
        res= PQexec(conn,"START TRANSACTION");
        if (PQresultStatus(res) != PGRES_COMMAND_OK)
        {
                fprintf(stderr,"START TRANSACTION failed: %s",PQerrorMessage(conn));
                PQclear(res);
                return PGRES_BAD_RESPONSE;
        }
        PQclear(res);
        res = PQexec(conn,"LOCK TABLE softdrink IN SHARE MODE");
        if (PQresultStatus(res) != PGRES_COMMAND_OK)
        {
                fprintf(stderr,"LOCK TABLE fialed: %s",PQerrorMessage(conn));
                PQclear(res);
                return PGRES_BAD_RESPONSE;
        }
        PQclear(res);
        res = PQexec(conn,"SELECT sd_id,name,introduced FROM softdrink");
        if (PQresultStatus(res) != PGRES_TUPLES_OK)
        {
                fprintf(stderr,"SELECT failed: %s",PQerrorMessage(conn));
                PQclear(res);
                return PGRES_BAD_RESPONSE;
        }
	printf("%s %s %s \n","sd_id","name","intoduced");
	for (int i=0; i < PQntuples(res);i++)
		printf("%-10s%-12s%-10s",PQgetvalue(res,i,0),PQgetvalue(res,i,1),PQgetvalue(res,i,2));
	printf("\n");
	PQclear(res);
	printf("Selecting softdrink is succefull!\n");
        return PGRES_COMMAND_OK;

}

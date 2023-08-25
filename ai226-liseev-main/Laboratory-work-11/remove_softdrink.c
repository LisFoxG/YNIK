#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libpq-fe.h"
#include "softdrink.h"

ExecStatusType remove_softdrink(PGconn* conn)
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
	res = PQexec(conn,"LOCK TABLE softdrink IN EXCLUSIVE MODE");
	if (PQresultStatus(res) != PGRES_COMMAND_OK)
	{
		fprintf(stderr,"LOCK TABLE fialed: %s",PQerrorMessage(conn));
		PQclear(res);
		return PGRES_BAD_RESPONSE;
	}
	PQclear(res);
	res = PQexec(conn,"DELETE FROM softdrink");
	if (PQresultStatus(res) != PGRES_COMMAND_OK)
	{
		fprintf(stderr,"DELETE failed: %s",PQerrorMessage(conn));
                PQclear(res);
                return PGRES_BAD_RESPONSE;
	}
	PQclear(res);
	res = PQexec(conn,"COMMIT");
	if (PQresultStatus(res) != PGRES_COMMAND_OK)
	{
                fprintf(stderr,"COMMIT failed: %s",PQerrorMessage(conn));
                PQclear(res);
                return PGRES_BAD_RESPONSE;
        }
	PQclear(res);
	printf("DEleting softdrink is succefull!\n");
	return PGRES_COMMAND_OK;

}

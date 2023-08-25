#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libpq-fe.h"
#include "softdrink.h"

ExecStatusType add_softdrink(PGconn* conn)
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
        res = PQexec(conn,"INSERT INTO softdrink VALUES (1,'Coca-cola','08/08/1886') ");
        if (PQresultStatus(res) != PGRES_COMMAND_OK)
        {
                fprintf(stderr,"INSERT INTO failed: %s",PQerrorMessage(conn));
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
        printf("Inserting into softdrink is succefull!\n");
        return PGRES_COMMAND_OK;

}


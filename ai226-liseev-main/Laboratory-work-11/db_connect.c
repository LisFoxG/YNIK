#include <stdio.h>
#include <stdlib.h>
#include "libpq-fe.h"

int main(void) {
	PGconn *conn;
	char db_name[]="liseev";
	char user_name[]="liseev";

	conn=PQsetdbLogin(NULL,NULL,NULL,NULL,db_name,user_name,NULL);
	if (PQstatus(conn) == CONNECTION_OK)
		printf("Conection to database %s is succefull!\n",db_name);
	else{
		fprintf(stderr,"Connect to databse %s failed: %s",db_name,PQerrorMessage(conn));
		return EXIT_FAILURE;}
	PQfinish(conn);
	return EXIT_SUCCESS;

}

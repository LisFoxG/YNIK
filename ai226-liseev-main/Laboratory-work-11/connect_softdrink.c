#include "softdrink.h"

PGconn* connect_softdrink (void) {
	PGconn *conn;
	char db_name[] ="liseev";
	char user_name[] = "liseev";

	conn = PQsetdbLogin(NULL,NULL,NULL,NULL,db_name,user_name,NULL);
	if (PQstatus(conn) == CONNECTION_OK ){
		printf("Connection to databse %s is succefull!\n",db_name);
		return conn;
	}
	else {
		fprintf(stderr,"Connect to database %s failed: %s",db_name,PQerrorMessage(conn));
		return NULL;
	}
}

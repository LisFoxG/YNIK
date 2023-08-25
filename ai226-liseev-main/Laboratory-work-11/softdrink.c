#include "softdrink.h"

int main(void){
	PGconn *conn;
	conn = connect_softdrink();
	if (conn == NULL)
		return EXIT_FAILURE;
	if (remove_softdrink(conn) != PGRES_COMMAND_OK)
		return EXIT_FAILURE;
	if (add_softdrink(conn) != PGRES_COMMAND_OK)
                return EXIT_FAILURE;
	if (get_softdrink(conn) != PGRES_COMMAND_OK)
                return EXIT_FAILURE;
	PQfinish(conn);
	return EXIT_SUCCESS;}

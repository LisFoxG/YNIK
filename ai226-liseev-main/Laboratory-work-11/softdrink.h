#include <stdio.h>
#include <stdlib.h>
#include "libpq-fe.h"

PGconn* connect_softdrink(void);
ExecStatusType remove_softdrink(PGconn* conn);
ExecStatusType add_softdrink(PGconn* conn);
ExecStatusType get_softdrink(PGconn* conn);


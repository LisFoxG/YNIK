#include <stdio.h>
#include <unistd.h>

int main (void) {
	fprintf(stdout,"Group process=%d\n",getpgrp());
	fprintf(stdout,"PID=%d\n",getpid());
	fprintf(stdout,"PPID=%d\n",getppid());
        fprintf(stdout,"UID=%d\n",getuid());
        fprintf(stdout,"GID=%d\n",getgid());
	return 0;
}



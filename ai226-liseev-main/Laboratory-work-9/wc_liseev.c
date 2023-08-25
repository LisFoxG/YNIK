#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>


int main (void)
{	char* wc_args[] = { 	"wc",
				"-c",
				"/etc/group",
				NULL};

	pid_t  pid = fork();
	if (pid != 0){
		sleep(1);
		execv("/usr/bin/wc",wc_args);
		return EXIT_FAILURE;
	}
	else
		printf("the child of Liseev executes: wc \n");
return 	EXIT_SUCCESS;
}

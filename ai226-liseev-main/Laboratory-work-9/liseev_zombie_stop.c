#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

void sighandler (int sig){
	printf("Signal handler for signal = %d\n",sig);
	wait(0);}

int main (void){
	int i;
	signal(SIGCHLD,&sighandler);
	pid_t pid = fork();
	if (pid == 0){
		fprintf(stdout,"the child suddenly stopped\n");
		_exit(0);
	}
	else{
		fprintf(stdout,"the parent start ...\n");
		sleep(10);
		fprintf(stdout,"the parent finish ...\n");
	}
return 	EXIT_SUCCESS;}

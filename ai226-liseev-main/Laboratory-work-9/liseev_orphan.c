#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (void){
	int i;
	int n=25;
	pid_t pid = fork();
	if (pid != 0){
		printf("I'm parent with PID = %d. My child PID = %d\n",getpid(),pid);
		sleep(n+1);
		_exit(0);
	}
	else {
		for (i=1;i<=2*n+1;i++){
			printf("Parent of Liseev PPID= %d\n",getppid());
			sleep(1);}}
return EXIT_SUCCESS;}


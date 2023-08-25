#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main (void){
	pid_t pid =fork();
	if (pid ==0) {
		fprintf(stderr,"I am Zombie-process of Liseev\n");
		_exit(0);}
	else{
		fprintf(stderr,"the parent start ...\n");
		sleep(10);
		fprintf(stderr,"tha parent finish ...\n");
	}
return EXIT_SUCCESS;}

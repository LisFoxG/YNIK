#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
	int data_processed;
	int file_pipes [2];
	const char message [] = "Laboratory work of Liseev";
	char buffer [BUFSIZ + 1];
	pid_t pid;
	char* program_args[] = {"read_data", buffer, NULL};
	memset (buffer, '\0', sizeof(buffer));
	if (pipe(file_pipes) == 0) {
		pid = fork();
		if (pid == 0) {
			sprintf(buffer,"%d", file_pipes[0]);
			execv("./pipe_read", program_args);
		}
		else {
			data_processed = write(file_pipes [1], message, strlen (message));
			printf("The Laboratory work of Liseev");
			printf("I'm parent process of Liseev with PID=%d.\n", getpid());
			printf("stdin fd[0]=%d, stdout fd[1]=%d\n",
				file_pipes[0], file_pipes [1]);
			printf("I wrote %d bytes of message: %s.\n",
				data_processed, message);
			sleep(1);
		}
	}
	return EXIT_SUCCESS;
}

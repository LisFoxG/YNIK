
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

#define NAMEDPIPE_NAME "liseev"
#define BUFSIZE 50

int main (int argc, char ** argv) {
	int fd, len;
	char buf[BUFSIZE];

	if (mkfifo (NAMEDPIPE_NAME, 0660) ) {
		fprintf(stderr, "Error in mkfifo!");
		return 1;
	}
	printf("%s is created\n", NAMEDPIPE_NAME);

	if ((fd = open (NAMEDPIPE_NAME, O_RDONLY)) <= 0 ) {
		fprintf(stderr, "Error in open!");
		return 1;
	}
	printf("%s is opened\n", NAMEDPIPE_NAME);
	do {
		memset(buf, '\0', BUFSIZE);
		if ((len = read(fd, buf, BUFSIZE-1)) <= 0 ) {
			printf("END!");
			close (fd);
			remove (NAMEDPIPE_NAME);
			return 0;
	}
		printf("Incomming message (%d): %s\n", len, buf);
	} while ( 1 );
}

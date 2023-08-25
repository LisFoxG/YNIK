
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>


int main(void) {
	pthread_t f2_thread, f1_thread;
	void *f2(), *f1();
	int i1 = 30, i2 = 30;
	pthread_create(&f1_thread, NULL, f1, &i1);
	pthread_create(&f2_thread, NULL, f2, &i2);
	pthread_join(f1_thread, NULL);
	pthread_join(f2_thread, NULL);
	return 0;
}
void *f1(int *x) {
	int i,n;
	char s[10]="liseev";
	n = *x;
	for (i=1;i<n;i++) {
		printf("f1: %s\n", s);
		sleep (1);}
	pthread_exit(0);}

void *f2(int *x) {
	int i,n;
	n = *x;
	char s[10]="liseev";
	for (i=1;i<n;i++) {
		printf("f2: %s\n", s);
		sleep (1);
	}
	pthread_exit(0);
}

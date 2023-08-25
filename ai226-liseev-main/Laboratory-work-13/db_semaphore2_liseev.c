
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <semaphore.h>
#define SEMAPHORE_NAME "/liseev_smaphore2"

 struct softdrink {
        int sd_id;
        char name[20];
        int data;
};

struct softdrink softdrink [2] = { {1, "Pepsi", 18860808 } };

int main(int atgc,char** argv)
{
	sem_t *sem;
        pthread_t T1_thread, T2_thread;
        void *T1(), *T2();
	if((sem = sem_open(SEMAPHORE_NAME, O_CREAT, 0770,1))==SEM_FAILED){
		fprintf(stderr,"sem_open_error");
		return 1;
	}
        pthread_create(&T1_thread, NULL, T1, sem);
        pthread_create(&T2_thread, NULL, T2, sem);
        pthread_join(T1_thread, NULL);
        pthread_join(T2_thread, NULL);
	if (sem_close(sem)<0){
		fprintf(stderr,"sem_close error");
		return 1;}
	return 0;
}

void *T1(sem_t *sem){
        for (int i=1;i<=3;i++) {
                if (sem_wait(sem) != 0) fprintf(stderr,"T1: sem_wait error!\n");
                printf("T1: Critical Region\n");
                printf("T1: Read [sd_id] = %d\n",softdrink[0].sd_id);
		if (sem_post(sem)!=0 ) fprintf(stderr,"T1: sem_post error!\n");
		softdrink[0].sd_id = 2;
                printf("T1: Write [sd_id] = %d\n",softdrink[0].sd_id);
                printf("T1: Noncritical Region\n");
                sleep(1);
                }
        }

void *T2(sem_t *sem) {
        sleep(1);
        for (int i=1;i<=3;i++) {
		if (sem_wait(sem) != 0) fprintf(stderr,"T2: sem_wait error!\n");
                printf("T2: Critical Region\n");
                printf("T2: Read sd_id] = %d\n",softdrink[0].sd_id);
		if (sem_post(sem) != 0) fprintf(stderr,"T2: sem_wait error!\n");
		softdrink[0].sd_id = 2;
                printf("T2: Write [sd_id] = %d\n",softdrink[0].sd_id);
                printf("T2: Noncritical Region\n");
                sleep(1);
                }
}


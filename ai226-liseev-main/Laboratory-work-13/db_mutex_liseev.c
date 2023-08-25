#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>

static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

 int turn = 0;
 struct softdrink {
        int sd_id;
        char name[20];
        int data;
};

struct softdrink softdrink [2] = { {1, "Pepsi", 18860808 } };

int main(int argc, char** argv)
{
        pthread_t T1_thread, T2_thread;
        void *T1(), *T2();
        pthread_create(&T1_thread, NULL, T1, NULL);
        pthread_create(&T2_thread, NULL, T2, NULL);
        pthread_join(T1_thread, NULL);
        pthread_join(T2_thread, NULL);
	return 0;
}

void *T1(){
        for (int i=1;i<=3;i++) {
		if (pthread_mutex_lock(&mutex) == EDEADLK)
			fprintf(stderr,"T1: вже зайнятий поточним процесом!\n");
                printf("T1: Critical Region\n");
                printf("T1: Read [sd_id] = %d\n",softdrink[0].sd_id);
		if (pthread_mutex_unlock(&mutex) == EPERM)
                        fprintf(stderr,"T1: EPERM - процес не є власноиком mutex !\n");
                softdrink[0].sd_id = 2;
                printf("T1: Write [sd_id] = %d\n",softdrink[0].sd_id);
                printf("T1: Noncritical Region\n");
                sleep(1);
                }
        }

void *T2() {
        sleep(1);
        for (int i=1;i<=3;i++) {
		if (pthread_mutex_lock(&mutex) == EDEADLK)
                        fprintf(stderr,"T2: вже зайнятий поточним процесом!\n");

                printf("T2: Critical Region\n");
                printf("T2: Read sd_id] = %d\n",softdrink[0].sd_id);
                if (pthread_mutex_unlock(&mutex) == EPERM)
                        fprintf(stderr,"T2: EPERM - процес не є власноиком mutex !\n");
                softdrink[0].sd_id = 2;
                printf("T2: Write [sd_id] = %d\n",softdrink[0].sd_id);
                printf("T2: Noncritical Region\n");
                sleep(1);
                }
}







#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>

 int turn = 0;
 struct softdrink {
        int sd_id;
        char name[20];
        int data;
};

struct softdrink softdrink [2] = { {1, "Pepsi", 18860808 } };

void main(void)
{
        pthread_t T1_thread, T2_thread;
        void *T1(), *T2();
        pthread_create(&T1_thread, NULL, T1, NULL);
        pthread_create(&T2_thread, NULL, T2, NULL);
        pthread_join(T1_thread, NULL);
        pthread_join(T2_thread, NULL);
}

void *T1(){
        for (int i=1;i<=3;i++) {
                while (turn != 0);
                sleep (2);
                turn = 1;
                printf("T1: Critical Region\n");
                printf("T1: Read [sd_id] = %d\n",softdrink[0].sd_id);
                sleep (1);
                softdrink[0].sd_id = 2;
                printf("T1: Write [sd_id] = %d\n",softdrink[0].sd_id);
                sleep (1);
                turn = 0;
                printf("T1: Noncritical Region\n");
                sleep(1);
                }
        }

void *T2() {
        sleep(1);
        for (int i=1;i<=3;i++) {
                while (turn != 0);
                turn = 1;
                printf("T2: Critical Region\n");
                printf("T2: Read sd_id] = %d\n",softdrink[0].sd_id);
		sleep(1);
		softdrink[0].sd_id = 2;
		printf("T2: Write [sd_id] = %d\n",softdrink[0].sd_id);
		sleep(1);
		turn=0;
		printf("T2: Noncritical Region\n");
		sleep(1);
		}
}


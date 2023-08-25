#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

static void sig_handler(int signo)
{
    if (signo == SIGUSR2)
        printf("Process of Liseev got signal\n");
}

int main(void)
{
    if (signal(SIGUSR2, sig_handler) == SIG_ERR)
        printf("\nFailed to register signal handler\n");
    printf("Mu PID = %d. Waiting for SIGUSR2 signal...\n",getpid());
    while (1)
    {
        sleep(1);
    }
    return EXIT_SUCCESS;
}


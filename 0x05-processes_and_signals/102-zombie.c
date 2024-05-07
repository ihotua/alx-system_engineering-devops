#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Creates 5 zombie processes
 *
 * Return: 0
 */

int main(void)
{
    pid_t pid;
    int i;

    for (i = 0; i < 5; i++)
    {
        pid = fork();
        if (pid < 0)
        {
            perror("Error:");
            exit(1);
        }
        else if (pid == 0)
        {
            printf("Zombie process created, PID: %d\n", getpid());
            exit(0);
        }
        else
        {
            sleep(1);
        }
    }
    return (0);
}

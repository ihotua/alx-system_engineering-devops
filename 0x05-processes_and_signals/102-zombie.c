#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * infinite_while - prevents process from ending to make it a zombie
 *
 * Return: Always 0
 */

int infinite_while(void)
{
	while (1)
		sleep(1);
	return (0);
}

/**
 * main - creates 5 zombie processes
 *
 * Return: 0 on success
 */

int main(void)
{
	pid_t pikin;
	int i;

	for (i = 0; i < 5; i++)
	{
		pikin = fork();
		if (pikin < 0)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}
		else if (pikin == 0)
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			printf("Zombie process created, PID: %d\n",
					pikin);
		}
	}
	infinite_while();
	return (0);
}

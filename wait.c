#include "main.h"
/**
<<<<<<< HEAD
 * main - function wait
 * Return: Always 0
=======
* main - function wait
*
* Return: Always 0
>>>>>>> 661d7dea8541b167806bc9c65b277fb5dba0042f
*/
int _wait(void)
{
	pid_t child_pid;
	int status;

<<<<<<< HEAD
    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error:");
        return (-1);
    }
    if (child_pid == 0)
    {
    if (execmd(argv) == -1)
    {
        return (-1);
    }
    else
    {
        wait(&status);
    }
    return (0);
    }
=======
	char **argv;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child_pid == 0)
	{
		if (execmd(argv) == -1)
		{
			return (1);
		}
	else
	{
		wait(&status);
	}
	}
	return (0);
}
>>>>>>> 661d7dea8541b167806bc9c65b277fb5dba0042f

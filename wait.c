#include "main.h"
/**
* _wait - function wait
* @argv: arguments
* Return: 0 on success, -1 on fail
*/
int _wait(char **argv)
{
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	else if (child_pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("./hsh");
			exit(EXIT_FAILURE);
		}
	}
	else
		waitpid(child_pid, NULL, WUNTRACED);
	return (0);
}

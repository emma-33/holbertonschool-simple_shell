#include "main.h"

/**
* execmd - executes a program
* @argv: argument
* Return: 0
*/
int execmd(char *argv[])
{
	char *command = NULL;

	if (argv)
		command = argv[0];

	if (execve(command, argv, NULL) == -1)
	{
		perror("Couldn't execute");
		return (-1);
	}
	return (0);
}

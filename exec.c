#include "main.h"

/**
* execmd - executes a program
* @argv: arguments
*/
void execmd(char *argv[])
{
	char *command = NULL;

	if (argv)
		command = argv[0];

	if (execve(command, argv, NULL) == -1)
	{
		perror("./hsh: No such file or directory");
	}
}

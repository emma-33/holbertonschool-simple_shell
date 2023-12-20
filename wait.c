#include "main.h"
/**
* _wait - function wait
* @line_ptr: arguments
* Return: 0 on success, -1 on fail
*/
int _wait(char *line_ptr)
{
	char **args = NULL, *path = NULL;
	pid_t child_pid;
	int status, exit_stat = 0;

	args = _strtok(line_ptr);
	if (args == NULL)
		return (-1);

	if (line_ptr[0] == '/')
		path = strdup(line_ptr);
	else
		path = get_path(args[0]);
	if (path == NULL)
	{
		return (-1);
	}
	child_pid = fork();
	if (child_pid < 0)
	{
		return (-1);
	}
	else if (child_pid == 0)
	{
		exit_stat = execve(path, args, environ);
	}
	else
	{
		wait(&status);
	}
	free(path);
	return (exit_stat);
}

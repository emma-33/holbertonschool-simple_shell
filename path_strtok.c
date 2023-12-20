#include "main.h"

/**
* get_path - gets the path
* @command: the command
* Return: full path or NULL (on error)
*/

char *get_path(char *command)
{
	char *env, *env_copy;
	char path[1024];
	char *token;
	struct stat buffer;

	env = getenv("PATH");
	if (env == NULL)
		return (NULL);
	env_copy = strdup(env);
	token = strtok(env_copy, ":");
	while (token != NULL)
	{
		sprintf(path, "%s/%s", token, command);
		if (stat(path, &buffer) == 0)
		{
			free(env_copy);
			return (strdup(path));
		}
		token = strtok(NULL, ":");
	}
	free(env_copy);
	return (NULL);
}
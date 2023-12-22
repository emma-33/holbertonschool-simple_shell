#include "main.h"

/**
* get_path - gets the path
* @command: the command
* Return: full path or NULL (on error)
*/

char *get_path(char *command)
{
	char *env, *env_copy = NULL;
	char *path = NULL, *token = NULL;
	char path_buffer[1024];
	struct stat buffer;

	env = getenv("PATH");
	if (env == NULL)
		return (NULL);

	env_copy = strdup(env);
	if (env_copy == NULL)
		return (NULL);

	token = strtok(env_copy, ":");
	while (token != NULL)
	{
		snprintf(path_buffer, sizeof(path_buffer), "%s/%s", token, command);
		if (stat(path_buffer, &buffer) == 0)
		{
			path = strdup(path_buffer);
			break;
		}
		token = strtok(NULL, ":");
	}
	free(env_copy);
	return (path);
}

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

/**
* path_strtok - tokenize path
* @path: full path
* Return: array of pointers to path tokens
*/

char **path_strtok(char *path)
{
	char **array = NULL, *token = NULL;
	int i = 0;

	array = malloc(sizeof(char *) * 1024);
	if (array == NULL)
	{
		perror("error in memory allocation");
		exit(EXIT_FAILURE);
	}
	token = strtok(path, ":");
	while (token != NULL)
	{
		array[i] = token;
		token = strtok(NULL, ":");
		i++;
	}
	array[i] = NULL;
	return (array);
}

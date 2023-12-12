#include "main.h"

/**
* _strtok - parses the tokens
* @str: string to parse
* @delim: character delimiter
* Return: pointer to first token of the string
*/
char *_strtok(char *str, const char *delim)
{
	char *token;

	char **array;

	int i = 0;

	token = strtok(str, delim);

	array = malloc(sizeof(char *) * 1024);

	if (array == NULL)
		return (NULL);

	while (token != NULL)
	{
		array[i] = strdup(token);
		token = strtok(NULL, delim);
		i++;
	}
	array[i] = NULL;

	return (token);
}

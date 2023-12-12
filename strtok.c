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

	token = strtok(str, " \n");

	array = malloc(sizeof(char *) * 1024);

	while (token)
	{
		array[i] = token;
		token = strtok(NULL, " \n");
		i++;
	}
	return (token);
}

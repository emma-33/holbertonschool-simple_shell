#include "main.h"

/**
* _strtok - parses the tokens
* @str: string to parse
* @delim: character delimiter
* @count_char: number of chararcters
* Return: pointer to first token of the string
*/
char *_strtok(char *str, const char *delim, ssize_t count_char)
{
	char *token;

	char **array;
	char *str_copy = NULL;

	int num_tokens = 0;

	str_copy = malloc(sizeof(char) * count_char);

	if (str_copy == NULL)
	{
		return (-1);
	}
	strcpy(str_copy, str);
	token = strtok(str_copy, delim);

	while (token != NULL)
	{
		token = strtok(NULL, delim);
		num_tokens++;
	}
	num_tokens++;

	array = malloc(sizeof(char *) * num_tokens);

	return (token);
}

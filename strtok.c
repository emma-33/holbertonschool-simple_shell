#include "main.h"
/**
* _strtok - parses the string into tokens
* @str: string to parse
* Return: pointer to first token of the string
*/
char **_strtok(char *str)
{
	char **array = NULL;

	char *token = NULL, *str_cpy = strdup(str);

	unsigned int num_tokens = 0, i = 0;

	token = strtok(str, " \n");

	while (token != NULL)
	{
		num_tokens++;
		token = strtok(NULL, " \n");
	}
	num_tokens++;

	array = malloc(sizeof(char *) * num_tokens);
	if (array == NULL)
	{
		perror("./hsh");
		exit(EXIT_FAILURE);
	}

	token = strtok(str_cpy, " \n");
	while (token != NULL)
	{
		array[i] = strdup(token);
		i++;
		token = strtok(NULL, " \n");
	}
	array[i] = NULL;
	free(str_cpy);
	return (array);
}

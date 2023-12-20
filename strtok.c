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
	/* count du nombre de tokens*/
	while (token != NULL)
	{
		num_tokens++;
		token = strtok(NULL, " \n");
	}
	num_tokens++;
    /*malloc du tableau array pour stocker les tokens*/
	array = malloc(sizeof(char *) * num_tokens);
	if (array == NULL)
	{
		perror("Error in memory allocation");
		exit(EXIT_FAILURE);
	}
    /*mettre les tokens dans le tableau*/
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

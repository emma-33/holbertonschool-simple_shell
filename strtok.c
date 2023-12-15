#include "main.h"

/**
* _strtok - parses the tokens
* @str: string to parse
* @str_copy: copy of str
* @delim: character delimiter
* Return: pointer to first token of the string
*/
char **_strtok(char *str, char *str_copy, const char *delim)
{
	char *token;
	char **array;
	unsigned int num_tokens = 0, i = 0;

	token = strtok(str, delim);
/* count du nombre de tokens*/
	while (token != NULL)
	{
		num_tokens++;
		token = strtok(NULL, delim);
	}
	num_tokens++;
/*malloc du tableau array pour stocker les tokens*/
	array = malloc(sizeof(char *) * num_tokens);
	if (array == NULL)
		return (NULL);

/*mettre les tokens dans le tableau*/
	token = strtok(str_copy, delim);
	while (token != NULL)
	{
		array[i] = malloc(sizeof(char) * strlen(token));
		strcpy(array[i], token);
		token = strtok(NULL, delim);
		i++;
	}
	array[i] = NULL;
	return (array);
}

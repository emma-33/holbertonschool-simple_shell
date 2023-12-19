#include "main.h"
/**
* loop - loops the prompt
* Return: 0
*/
int loop(void)
{
	char *lineptr = NULL, *lineptr_copy = NULL;

	size_t count = 0;
	ssize_t count_char;
	char **token = NULL;

	while (1)
	{
		printf("$ ");
		/*on récupère la commande entrée par l'user(lineptr)*/
		count_char = getline(&lineptr, &count, stdin);
		
		if (count_char ==  -1)
		{
			perror("Exiting shell");
			return (-1);
		}
		else
		{
			if (strcmp(lineptr, "exit\n") == 0)
            {
                exit(EXIT_SUCCESS);
            }
            /*on fait une copie de la commande lineptr*/
            lineptr_copy = malloc(sizeof(char) * count_char);
		strcpy(lineptr_copy, lineptr);
            token = _strtok(lineptr, lineptr_copy, "\n");

			{
				exit(EXIT_SUCCESS);
			}
			token = _strtok(lineptr, lineptr_copy, " \n");
			_wait(token);
		}
	}
	free(lineptr);
	free(lineptr_copy);
	return (0);
}

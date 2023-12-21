#include "main.h"

/**
* loop - loops the prompt
* Return: 0
*/
int loop(void)
{
	char *line_ptr = NULL;
	int ex = 0, count_char = 0;
	size_t count = 0;

	while (1)
	{
		printf("$ ");

		count_char = getline(&line_ptr, &count, stdin);
		if (count_char == -1)
		{
			printf("Exiting shell...\n");
			exit(EXIT_SUCCESS);
		}
		if (strcmp(line_ptr, "exit\n") == 0)
		{
			printf("Exiting shell...\n");
			exit(EXIT_SUCCESS);
		}
		if (strcmp(line_ptr, "env\n") == 0)
		{
			printEnvironnement();
		}
		ex = _wait(line_ptr);
		if (ex == -1)
			perror("Execution Error");
		free(line_ptr);
	}
	return (ex);
}

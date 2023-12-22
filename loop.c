#include "main.h"

/**
* loop - loops the prompt
* Return: 0
*/
int loop(void)
{
	char *line_ptr = NULL;
	int ex = 0, count_char;
	size_t count = 0;

	while (1)
	{
		if (isatty(fileno(stdin)))
			printf("$ ");

		count_char = getline(&line_ptr, &count, stdin);
		if (count_char == -1)
		{
			free(line_ptr);
			line_ptr = NULL;
			exit(EXIT_SUCCESS);
		}
		if (strcmp(line_ptr, "exit\n") == 0)
		{
			free(line_ptr);
			line_ptr = NULL;
			exit(EXIT_SUCCESS);
		}
		if (strcmp(line_ptr, "env\n") == 0)
		{
			printEnvironnement();
		}
		ex = _wait(line_ptr);
		if (ex == -1)
			perror("./hsh");

		free(line_ptr);
		line_ptr = NULL;
	}
	return (ex);
}

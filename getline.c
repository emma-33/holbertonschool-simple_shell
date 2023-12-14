#include "main.h"
/**
* getline function
*
* Return: numbers of charactère
*/
int _getline(char *lineptr, size_t *n)
{
	ssize_t count_char;

	count_char = getline(&lineptr, &n, STDIN_FILENO);

	if (count_char == -1)
	{
		return (-1);
	}
	return (count_char);
}

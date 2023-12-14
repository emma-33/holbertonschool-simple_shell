#include "main.h"

/**
* function main
*
* Return: Always 0
*/
int main(void)
{
	char *lineptr;

	const char *delim;

	size_t *n;

	printf("$ ");

	while (1)
	{
		_getline(lineptr, n);

		if (_getline == -1)
			return (-1);

		_strtok(lineptr, delim, _getline);

		if (_strtok == -1)
			return (-1);

		_wait();

		if (_wait == -1)
			return (-1);

	}
	 //free dans les fonctions
	return (0);
}

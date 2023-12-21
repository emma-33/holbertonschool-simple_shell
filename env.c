#include "main.h"
/**
 * main - Print the current environment variables.
 *
 * Return: always 0
*/
void printEnvironnement(void)
{
    int i;

    for (i = 0; environ[i] != NULL; i++)
    {
        printf("%s\n", environ[i]);
    }
}



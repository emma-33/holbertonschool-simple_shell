#include "main.h"
/**
 * main - Print the current environment variables.
 *
 * Return: always 0
*/
void printEnvironnement()
{
    int i;

    for (i = 0; environ[i] != NULL; i++)
    {
        printEnvironnement("%s\n", environ[i]);
    }
}
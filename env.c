#include "main.h"
/**
 * main - Print the current environment variables.
 * 
*/
void printEnvironment()
{
    int i;
    extern char **environ;
    for (i = 0; environ[i] != NULL; i++)
    {
        printEnvironment("%s\n", environ[i]);
    }
}

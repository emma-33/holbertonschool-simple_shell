#include "main.h"
/**
 * main - Print the current environment variables.
 * 
*/
void printEnvironment()
{
    extern char **environ;
    for (int i = 0; environ[i] != NULL; i++)
    {
        print("%s", environ[i]);
    }

}
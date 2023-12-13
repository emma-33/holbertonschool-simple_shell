#include "main.h"
/**
 * main - function wait
 * 
 * Return: Always 0
*/
int _wait(void)
{
    pid_t child_pid;
    int status;
    char **argv;
    
    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child_pid == 0)
    {
        if (execmd(argv) == -1)
        return (1);
    }
    else
    {
        wait(&status);
    }
    return (0);
}
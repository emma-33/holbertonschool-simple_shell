#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - function wait
 * 
 * Return: Always 0
*/
int wait(void)
{
    pid_t child_pid;
    int status;
    
    child_pid = fork();
    if (child_pid == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child_pid == 0)
    {
        if (exercmd == -1)
        return (1);
    }
    else
    {
        wait(&status);
    }
    return (0);
}
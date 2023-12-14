#include "main.h"
/**
 * getline - function that getline
 * 
 * Return: numbers of charactère
*/
int _getline(char *lineptr, size_t *n)
{
    ssize_t count_char;
    
    count_char = getline(&lineptr, &n, stdin);
    if (count_char == -1)
    {
        return (-1);
    }


    return (count_char);
}
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int prompt(void);
char *_strtok(char *str, const char *delim, ssize_t count_char);
int execmd(char *argv[]);
int _getline(char *lineptr, size_t *n);
int wait(void);
int fork(void);

#endif

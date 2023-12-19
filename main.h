#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
extern char **environ;
char **_strtok(char *str, char *str_copy, const char *delim);
int execmd(char *argv[]);
int _wait(char **argv);
int loop(void);

#endif

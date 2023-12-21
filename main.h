#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;
void printEnvironnement(void);
int loop(void);
int _wait(char *line_input);
char **_strtok(char *str);
char **path_strtok(char *path);
char *get_path(char *command);

#endif

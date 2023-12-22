###### **PROJET SIMPLE SHELL**

A shell is a program that provides a user interface to the operating system. It allows users to interact with the system by typing commands. The shell interprets these commands and executes them on behalf of the user.
When a user logs into a system, the shell is typically the first program that is started. The shell then presents the user with a prompt, which is a symbol or sequence of symbols that indicates that the shell is ready to accept a command.

The user can then type a command and press Enter. The shell will then interpret the command and execute it. If the command is successful, the shell will display the output of the command to the user. If the command is not successful, the shell will display an error message.



##### **AUTHORS**

This projet was relased by two students of HOLBERTON SCHOOL who are:

Edem DJOSSOU @github edemdj

Emma LATEYRON @github emma-33

We work on the campus every day and we make a Check in every morning and a Check out every afternoon. we divided some tasks, but the essential PROJECT was written in collaboration.


![HOLBERTON SCHOOL](https://getlogovector.com/wp-content/uploads/2020/11/holberton-school-logo-vector.png)


###### **COMPILATION**

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

##### **FILES**


| fuctions      |          description                  |
|--------:      |---------------------------------------|
| main.c        | main file                             |
| main.h        | Header file, contains all prototypes  |
|strtok.c       | function to tokenize strings          |
| wait.c        | file that contains wait, fork and execve functions |
| man_1_simple_shell | the man page                     |
| env.c         | function to print environnement variables      |
| loop.c        | loop the shell                        |
|path_strtok.c  | function to get command path          |





######  **FLOWCHART**


<picture>
  <source media="(prefers-color-scheme: dark)" srcset="https://files.slack.com/files-pri/T0423U1MW21-F06B8TC15J7/flowchart_simple_shell.jpg">
  <source media="(prefers-color-scheme: light)" srcset="https://files.slack.com/files-pri/T0423U1MW21-F06B8TC15J7/flowchart_simple_shell.jpg">
  <img alt="Shows an illustrated sun in light mode and a moon with stars in dark mode." src="https://files.slack.com/files-pri/T0423U1MW21-F06B8TC15J7/flowchart_simple_shell.jpg">
</picture>
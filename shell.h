#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>
#include <signal.h>
#include <dirent.h>

int _putchar(char c);
char **tokenize(char *lineptr);
char *get_path(char **env);
void getenv(char **env);
int exec_command(char **args);

#endif

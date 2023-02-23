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
char **tokenize(char *line);
char *find_path(void);
char *test_path(char **path, char *command);
void _getenv(char **env);
void handle_signal(int m);
void exec_command(char *cmd, char **arg);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
int _strcmp(char *str1, char *str2);
char *_strcpy(char *dest, char *src);
size_t _strncmp(char *s1, char *s2, size_t n);

struct info
{
	int final_exit;
	int ln_count;
} info;

struct flags
{
	bool interactive;
} flags;

#endif


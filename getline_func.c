#include "shell.h"
/**
 * _getline_cmd - gets input from user
 * Return: input
 */
char *_getline_cmd(void)
{
	char *lineptr = NULL;
	size_t n = 0;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "cisfun$ ", 2);

	if (getline(&lineptr, &n, stdin) == -1)
	{
		free(lineptr);
		return (NULL);
	}
	return (lineptr);
}

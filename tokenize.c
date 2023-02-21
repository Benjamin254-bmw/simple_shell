#include "shell.h"
/**
 * tokenize - tokenizes a string before execution
 * @lineptr: string to be tokenized
 * Return: tokens, arr of strings
 */
char **tokenize(char *lineptr)
{
	char **user_cmd = malloc(sizeof(char *) * 100);
	int i = 0;
	char *token;
	char delim[] = " \t\r\n";

	if (user_cmd == NULL)
	{
		perror("Error");
		return (0);
	}
	/* split/tokenize the lineptr string into arr of words */
	token = strtok(lineptr, delim);

	/* Determine how many tokens are there */
	for (i = 0; token != NULL, i++)
	{
		user_cmd[i] = token;
		token = strtok(NULL, delim);
	}
	/* end of string */
	user_cmd[i] = NULL;
	return (user_cmd);
}

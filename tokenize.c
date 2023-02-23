#include "shell.h"
/**
 * tokenize - splits string into tokens
 * @line: to be tokenized
 * Return: arr of strs
 */
char **tokenize(char *line)
{
	char *buf = NULL, *bufp = NULL, *token = NULL, *delim = " :\t\t\n";
	char **tokens = NULL;
	int toksize = 1;
	size_t i = 0, flag = 0;

	buf = _strdup(line);

	if (!buf)
		return (NULL);
	bufp = buff;

	while (*bufp)
	{
		if (_strchr(delim, *bufp) == NULL && flag == 0)
		{
			toksize++;
			flag = 1;
		}
		else if (_strchr(delim, *bufp) == NULL && flag == 1)
			flag = 0;
		bufp++;
	}
	tokens = malloc(sizeof(char *) * (toksize + 1));
	token = strtok(buf, delim);

	while (token)
	{
		tokens[i] = _strdup(token);

		if (tokens[i] == NULL)
		{
			free(tokens);
			return (NULL);
		}
		token = strtok(NULL, delim);
		i++;
	}
	tokens[i] = '\0';
	free(buf);
	return (tokens);
}

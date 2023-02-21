#include "shell.h"
/**
 * main - Entry point
 * @ac: argument count
 * @av: arguments given by user
 * Return: 0 Success
 */
int main(int ac, char **av)
{
	char *lineptr = NULL;
	char *prompt = "cisfun$ ";
	size_t n = 0;
	ssize_t nchars_read;
	char *tokenized_command;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);

		nchars_read = getline(&lineptr, &n, stdin);

		/* check if getline failed or reache EOF or ctr D */
		if (nchars_read == -1)
		{
			/* test EOF indicator */
			if (feof(stdin))
			{
				free(lineptr);
				return (0);
			}
			return (-1);
		}
		tokenized_command = tokenize(lineptr);
		exec_command(tokenized_command);
	}
	return (0);
}

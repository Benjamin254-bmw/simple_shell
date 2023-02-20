#include "shell.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments given by user
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	char *prompt = "cisfun$ ";
	char *cmd;
	size_t n = 0;
	ssize_t nchars_read;
	char **executable_cmd;

	while (1)
	{
		/* interactive and non interactive mode */
		if ((isatty(STDIN_FILENO)))
			printf("%s", prompt);

		nchars_read = getline(&cmd, &n, stdin);

		if (feof(stdin))
		{
			free(cmd);
			return (0);
		}
		else
		{
			return (-1);
		}
		executablr_cmd = get_command(cmd);
		execute(executable_cmd);
	}
	return (0);
}

/**
 * get_command - tokenization of args
 * @cmd: string to be tokenized
 * Return: tokens
 */
char **get_command(char *cmd)
{
	char *token;
	const char *delim = " \n";
}

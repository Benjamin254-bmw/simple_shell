#include "shell.h"
/**
 * exec_commnad - executes cmd enterd by user
 * @cmd: command
 * @arg: arr of ptr to commnads
 * Return: 0
 */
void exec_command(char *cmd, char **arg)
{
	pid_t child;
	int status;
	char **env = environ;

	child = fork();

	if (child < 0)
		perror(cmd);

	if (child == 0)
	{
		execve(cmd, arg, env);
		perror(cmd);
		free(cmd);
		free_buffers(arg);
		exit(98);
	}
	else
		wait(&status);
}

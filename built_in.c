#include "shell.h"
/**
 * _exit - exits  shell
 * @args: arr of strs
 * Return: 0
 */
void _exit(char **args)
{
	int s;

	if ((_strcmp("exit", args[0]) == 0))
	{
		if (args[1])
			s = atoi(args[1]);
		free(args[0];
		free(args);
		exit(s);
	}
}

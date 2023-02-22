#include "shell.h"
/**
 * _getenv - prints env to stdout
 * @env: environment
 */
void _getenv(char **env)
{
	size_t n = 0;

	while (env[n])
	{
		write(STDOUT_FILENO, env[n], _strlen(env[n]));
		write(STDOUT_FILENO, "\n", 1);
		n++;
	}
}

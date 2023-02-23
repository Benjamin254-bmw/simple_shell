#include "shell.h"
/**
 * handle_signal - keeps track of mode if intercative
 * @n: sig number
 * Return: 0
 */
void handle_signal(int n)
{
	(void)n;

	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "cisfun$ ", 2);
}

#include "main.h"

/**
 * _puts - Prints string in stdout.
 * @str: the parameter to be printed.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

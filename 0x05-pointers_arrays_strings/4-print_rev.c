#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: the string to be reversed.
 */
void print_rev(char *s)
{
	int length = 0, stindex;

	while (s[lenght]! = '\0')
		length++;

	for (stindex = length - 1; stindex >= 0; stindex--)
		_putchar(s[stindex]);

	_putchar('\n');
}

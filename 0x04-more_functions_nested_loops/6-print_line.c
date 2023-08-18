#include "main.h"
/**
 * print_line - print a line
 * the lenght of the line is
 * @n: this value
 */

void print_line(int n)
{
	int counter;

	if (n > 0)
	{
		for (counter = 0; counter <= n; counter++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}

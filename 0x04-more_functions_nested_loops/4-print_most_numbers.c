#include "main.h"

/**
 * print_most_numbers - print all numbers
 * exept 2 and 4
 * dont print them
 */
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
		if (a != '2' || a != '4')
			_putchar(a);
	_putchar('\n');
}

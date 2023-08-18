#include "main.h"

/**
 *more_numbers - prints
 *numbers from 0-14
 *10 times
 */
void more_numbers(void)
{
	int a, counter;

	for (counter = 1; counter <= 10; counter++)
		for (a = '0'; a <= '9'; a++)
			if (a > '9')
				_putchar(a / 10);
			_putchar(a);
	_putchar('\n');
}

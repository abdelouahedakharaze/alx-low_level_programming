#include "main.h"

/**
 * print_times_table - Prints multiple table of n,
 * @n: the number that we print table of.
 */
void print_times_table(int n)
{
	int number1, number2, number3;

	if (n >= 0 && n <= 15)
	{
		for (number1 = 0; number1 <= n; number1++)
		{
			_putchar('0');

			for (number2 = 1; number2 <= n; number2++)
			{
				_putchar(',');
				_putchar(' ');

				number3 = number1 * number2;

				if (number3 <= 99)
					_putchar(' ');
				if (number3 <= 9)
					_putchar(' ');

				if (number3 >= 100)
				{
					_putchar((number3 / 100) + '0');
					_putchar(((number3 / 10)) % 10 + '0');
				}
				else if (number3 <= 99 && number3 >= 10)
				{
					_putchar((number3 / 10) + '0');
				}
				_putchar((number3 % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

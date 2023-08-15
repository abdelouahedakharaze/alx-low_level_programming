#include "main.h"

/**
 * times_table - prints mult tables .
 * of numbers from 0 to 9.
 * @number1 , @number2:multiplied numbers.
 * number3:the product.
 */
void times_table(void)
{
	int number1, number2, number3;

	for (number1 = 0; number1 <= 9; number1++)
	{
		_putchar('0');

		for (number2 = 1; number2 <= 9; number2++)
		{
			_putchar(',');
			_putchar(' ');

			number3 = number1 * number2;

			if (number3 <= 9)
				_putchar(' ');
			else
				_putchar((number3 / 10) + '0');

			_putchar((number3 % 10) + '0');
		}
		_putchar('\n');
	}
}

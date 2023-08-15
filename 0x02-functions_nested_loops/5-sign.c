include "main.h"
/**
* print_sign - print sign of n
* @n: the int that we print its sign
* Return: 0 ,-1,1 acording to n
*/
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
}



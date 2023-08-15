#include "main.h"

/**
 * print_last_digit - prints the last digit of integer .
 * @number:the number of wich the last digit is printed.
 * Return: the value of last digit.
 */
int print_last_digit(int number)
{
	int last_digit = number % 10;

	if (number <= 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}

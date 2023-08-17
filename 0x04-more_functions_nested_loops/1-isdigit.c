#include "main.h"

/**
 * _isdigit - prints if a char is digit or not.
 * @c: the char we compare.
 *Return: 1 if char is a number,0 if not.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

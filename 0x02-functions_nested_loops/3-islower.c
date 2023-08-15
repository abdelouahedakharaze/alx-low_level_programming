#include "main.h"

/**
 * _islower - if c is lowercase .
 * @c:parameter
 * Return: 1 if lowercase
 *   0 if not
 */
void int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

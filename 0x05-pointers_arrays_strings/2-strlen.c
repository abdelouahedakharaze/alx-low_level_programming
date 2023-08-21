#include "main.h"

/**
 * _strlen - Returns len of a string.
 * @str: the parameter as string.
 *
 * Return: len string.
 */
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

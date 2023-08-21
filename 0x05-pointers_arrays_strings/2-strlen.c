#include "main.h"
/**
 * _strlen - Returns len of a string.
 * @str: the parameter as string.
 *
 * Return: len string.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}

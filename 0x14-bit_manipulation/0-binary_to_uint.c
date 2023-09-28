#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	for (num = 0; b && *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		num <<= 1;
		num += *b - '0';
	}
	return (num);
}

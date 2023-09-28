#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: number
 * @index: the index of the bit to get
 * Return: the value of the bit or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}

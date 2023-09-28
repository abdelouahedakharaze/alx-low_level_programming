#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: number1
 * @m: number2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipping = n ^ m;
	unsigned int counter = 0;

	while (flipping)
	{
		counter++;
		flipping &= flipping - 1;
	}

	return (counter);
}

#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times then \n.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char harf;
	int counter = 0;

	while (counter++ <= 9)
	{
		for (harf = 'a'; harf <= 'z'; harf++)
			_putchar(harf);
		_putchar('\n');
	}
}

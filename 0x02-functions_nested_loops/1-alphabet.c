#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char harf;

	for (harf = 'a'; harf <= 'z'; harf++)
		_putchar(harf);
	_putchar('\n');
}

#include "main.h"

/**
 * puts_half - Prints half of.
 * @str: The parameter .
 */
void puts_half(char *str)
{
	int stindex = 0, lenght = 0, n;

	while (str[stindex++])
		lenght++;

	if ((lenght % 2) == 0)
		n = lenght / 2;

	else
		n = (lenght + 1) / 2;

	for (stindex = n; stindex < lengh; stindex++)
		_putchar(str[stindex]);

	_putchar('\n');
}

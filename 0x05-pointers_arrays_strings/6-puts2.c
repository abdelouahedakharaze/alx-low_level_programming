#include "main.h"

/**
 * puts2 - Prints one char every two from.
 * @str: The parameter with chars.
 */
void puts2(char *str)
{
	int stindex = 0, lenght = 0;

	while (str[stindex++])
		lenght++;

	for (stindex = 0; stindex < lenght; stindex += 2)
		_putchar(str[stindex]);

	_putchar('\n');
}

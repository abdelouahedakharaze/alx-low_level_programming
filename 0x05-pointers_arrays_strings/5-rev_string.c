#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The parameter to be reversed.
 */
void rev_string(char *s)
{
	int length = 0, stindex = 0;
	char tmp;

	while (s[stindex++])
		length++;

	for (stindex = length - 1; stindex >= length / 2; stindex--)
	{
		tmp = s[stindex];
		s[stindex] = s[length - stindex - 1];
		s[length - stindex - 1] = tmp;
	}
}

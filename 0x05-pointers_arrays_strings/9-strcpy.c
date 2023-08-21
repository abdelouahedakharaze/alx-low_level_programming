#include "main.h"

/**
 * _strcpy - Copies @src to  @dest.
 * @dest: the buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: @dest pointer.
 */
char *_strcpy(char *dest, const char *src)
{
	int stindex = 0;

	while (src[stindex])
	{
		dest[stindex] = src[stindex];
		stindex++;
	}

	return (dest);
}

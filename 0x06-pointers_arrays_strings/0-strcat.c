#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: the string to be concatenated.
 * @src: The source string.
 * Return: A pointer to  the final @dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, lendest = 0;

	while (dest[index++])
		lendest++;

	for (index = 0; src[index]; index++)
		dest[lendest++] = src[index];

	return (dest);
}

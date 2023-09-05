#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer the newly-allocated space in memory of the 2 strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int index, resindex = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	result = malloc(sizeof(char) * len);

	if (result == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		result[resindex++] = s1[index];

	for (index = 0; s2[index]; index++)
		result[resindex++] = s2[index];

	return (result);
}

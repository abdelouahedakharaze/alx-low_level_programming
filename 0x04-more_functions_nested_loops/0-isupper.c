#include "main.h"
#include <stdio.h>
/**
 * _isupper - see if a char is upper.
 *Return: 1 if upper 0 if not
 *@c: the char we are talking about.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')	
		return (1);
	else
		return (0);
}

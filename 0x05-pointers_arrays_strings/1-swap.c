#include "main.h"
/**
*swap_int - swap two numbers.
*@a:the first parameter.
*@b:the second parameter.
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

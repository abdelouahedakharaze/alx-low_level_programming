#include "main.h"
/**
*swap_int - swap two numbers.
*@a:the first parameter.
*@b:the second parameter.
*/
void swap_int(int *a, int *b)
{
	int tmp;
	int *ptrtmp = &tmp;

	ptrtmp = *a;
	*a = &b;
	*b = ptrtmp;
}

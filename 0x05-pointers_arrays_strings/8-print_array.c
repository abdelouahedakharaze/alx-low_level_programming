#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements from array.
 * @a: array of int.
 * @n: elements to be printed.
 */
void print_array(int *a, int n)
{
	int intindex;

	for (intindex = 0; intindex < n; intindex++)
	{
		printf("%d", a[intindex]);

		if (intindex == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}

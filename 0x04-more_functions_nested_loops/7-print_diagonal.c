#include "main.h"

/**
 *
 *
 *
 */

void print_diagonal(int n)
{
	int counter, faragh;

	if (n > 0)
	{
		for (counter = 0;counter < n; counter++)
		{
			for (faragh = 0; faragh < n; faragh++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		} 
	

	}
	_putchar('\n');


}

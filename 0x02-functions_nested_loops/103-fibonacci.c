#include <stdio.h>

/**
 * main - Prints the sum of even-valued 
 *terms not exceeding 4000000.
 * Return: Always 0.
 */
int main(void)
{
	unsigned long term1 = 0, term2 = 1, termsum;
	float tot_sum;

	while (1)
	{
		termsum = term1 + term2;
		if (termsum > 4000000)
			break;

		if ((termsum % 2) == 0)
			tot_sum += termsum;

		term1 = term2;
		term2 = termsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
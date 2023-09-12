#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 * 1 and 2,
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long term1 = 0, term2 = 1, termsum;
	unsigned long term1_half1, term1_half2, term2_half1, term2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		termsum = term1 + term2;
		printf("%lu, ", termsum);

		term1 = term2;
		term2 = termsum;
	}

	term1_half1 = term1 / 10000000000;
	term2_half1 = term2 / 10000000000;
	term1_half2 = term1 % 10000000000;
	term2_half2 = term2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = term1_half1 + term2_half1;
		half2 = term1_half2 + term2_half2;
		if (term1_half2 + term2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		term1_half1 = term2_half1;
		term1_half2 = term2_half2;
		term2_half1 = half1;
		term2_half2 = half2;
	}
	printf("\n");
	return (0);
}
#include <stdio.h>


/**
 * main - outputs lowercase exept e and q alphabets.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[24] = "abcdfghijklmnoprstuvwxyz";
int i;
for (i = 0; i < 25; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}

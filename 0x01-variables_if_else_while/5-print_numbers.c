#include <stdio.h>

/**
 * main - Prints all single digit numbers of base ten starting from zero.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
		return (0);
}
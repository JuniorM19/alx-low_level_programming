#include <stdio.h>

/**
 * main - Lists all the natural numbers below that are multiples of 3 or 5.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, s = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			s += i;
		}
		i++
	}
	printf("%d\n", s)
		return (0);
}

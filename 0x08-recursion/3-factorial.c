#include <stdio.h>

/**
 * main - fuction that returns a factorial.
 * int factorial: gets factorial of n.
 * @n: numer that returns a factorial.
 * Return: factorial of n.
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0)
	return (1);

	return (n * factorial(n - 1));
}

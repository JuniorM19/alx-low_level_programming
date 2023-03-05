#include "main.h"
/**
 * main -  Prints _putchar, followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char *h = "main\n";

	while (*h)
	{
		_putchar(*h);
		h++;
	}
	return (0);
}

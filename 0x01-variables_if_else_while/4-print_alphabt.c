#include <stdio.h>

/**
 * main - Prints all the alphabet in lowercase except for q and e.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if ((c == 'q' || c == 'e') != 1)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

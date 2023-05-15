#include <stdio.h>

/**
 * main - a function that prints a string.
 * @s - source string.
 *
 * Return: string to be printed.
 */

void _puts_recursion(char *s)
{
        if (*s == 0)
	{
         return;
	}
	printf("%c", *s);
	_puts_recursion(++s);
}

int main(void)
{
	char s[] = "Puts with Recursion";
	_puts_recursion(s);
	return 0;
}

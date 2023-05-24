#include <stdio.h>

/**
 * main - a function that prints a string.
 *
 * _puts_recursion - Prints a string followed by a new line.
 * @s: string.
 *
 * Return: On success 1.
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}

#include <stdio.h>

/**
 * main - prints out a reverse string.
 *
 * @s - source string.
 * _print_rev_recursion - prints a string in reverse.
 *
 * Return - the string to be printed.
 */

void _print_rev_recursion(char *s)
{
	if(*s == 0)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}

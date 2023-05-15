#include <stdio.h>

/**
 * main - a function that prints a string.
 * @s - source string.
 *_puts_recursion - prints a string.
 * Return: string to be printed.
 */

void _puts_recursion(char *s)
{
if (*s == 0)
{
putchar('\n');
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}

#include "main.h"

/**
 * main - Entry point
 * _puts - prints a string, followed by a new line, to std output.
 *@str: string to print.
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}

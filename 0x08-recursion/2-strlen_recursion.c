#include <stdio.h>

/**
 * main - function that returns the length of a string.
 *
 * @s: source string
 *@_strlen_recursion: prints the string length.
 *
 * Return: the string length.
 */


int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
	return (0);
}

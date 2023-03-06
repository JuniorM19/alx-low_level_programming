#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: number who's last digit is to be printed
 *
 * Return: the last digit of @num
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	last digit = last digit < 0 ? -1 * last_digit : last_digit;
	_putchar(last_digit + '0');

}

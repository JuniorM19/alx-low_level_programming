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
	int num;

	if (n < 0)
	{
		num = -1 * (n % 10);
		_putchar(num + '0');
		return (num);
	}
	else
	{
		num = n % 10;
		_putchar(num + '0')
			return (num);
	}

}

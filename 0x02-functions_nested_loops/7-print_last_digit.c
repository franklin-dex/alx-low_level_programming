#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @n: the integer to find the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -n % 10;
	}
	else
	{
		last_digit = n % 10;
	}

	_putchar('0' + last_digit);

	return (last_digit);
}

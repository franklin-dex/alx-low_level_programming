#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @n: the integer to find the last digit of
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int z;

	if (n < 0)
	{
		z = -n % 10;
	}
	else
	{
		z = n % 10;
	}

	_putchar('0' + z);

	return (z);
}

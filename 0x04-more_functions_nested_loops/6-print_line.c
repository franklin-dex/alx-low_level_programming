#include "main.h"

/**
 * print_line - prints a straight line with n underscores
 * @n: the number of underscores to print
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

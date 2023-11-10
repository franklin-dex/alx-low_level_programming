#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Print numbers with a separator
 * @separator: The string to be printed between numbers
 * @n: The number of integers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		_putchar(va_arg(args, int) + '0');

		if (separator != NULL && i < n - 1)
		{
			unsigned int j = 0;

			while (separator[j])
			{
				_putchar(separator[j]);
				j++;
			}
		}
	}

	va_end(args);

	_putchar('\n');
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Print strings with a separator
 * @separator: The string to be printed between the strings
 * @n: The number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			_putchar('('), _putchar('n'), _putchar('i'), _putchar('l'), _putchar(')');
		else
		{
			while (*str)
				_putchar(*str), str++;
		}

		if (separator != NULL && i < n - 1)
		{
			while (*separator)
				_putchar(*separator), separator++;
		}
	}

	va_end(args);

	_putchar('\n');
}

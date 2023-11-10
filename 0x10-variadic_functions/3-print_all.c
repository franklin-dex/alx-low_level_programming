#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - Print values based on format string
 * @format: A list of types of arguments to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				_putchar(separator[0]), _putchar(va_arg(args, int));
				break;
			case 'i':
				_putchar(separator[0]), _putchar(va_arg(args, int) + '0');
				break;
			case 'f':
				_putchar(separator[0]), _putchar(va_arg(args, double) + '0');
				break;
			case 's':
				{
					char *str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					while (*str)
						_putchar(*str), str++;
				}
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	va_end(args);
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: the string to print
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

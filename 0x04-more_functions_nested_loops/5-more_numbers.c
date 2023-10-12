#include "main.h"

/**
 * more_numbers - prints ten times of a number
 *
 * Return: 0 always
 */
void more_numbers(void)
{
	char j, c;

	for (c = 0; c <= 9; c++)
	{
		for (j = 0; j <= 14; j++)

			if (c >= 10)
			{
				_putchar('c');
				_putchar(j % 10 + '0');
			}

			else
			{
				_putchar(c + '0');
			}
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * main - entry
 *
 * print_alphabet - prints lowercase alphabet, then new line
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
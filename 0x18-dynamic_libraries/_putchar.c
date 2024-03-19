#include "main.h"

/**
 * _putchar - prints a char to stdout
 * @c - the character to be printed
 * return: on success the num of char written
 * on error -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

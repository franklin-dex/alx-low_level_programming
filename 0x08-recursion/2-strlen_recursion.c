#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string recursively.
 * @s: The input string to measure the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

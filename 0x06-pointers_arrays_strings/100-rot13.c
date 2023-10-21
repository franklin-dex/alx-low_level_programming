#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	while (*str)
	{
		for (i = 0; alphabets[i]; i++)
		{
			if (*str == alphabets[i])
			{
				*str = rot13[i];
				break;
			}
		}
		str++;
	}

	return (ptr);
}

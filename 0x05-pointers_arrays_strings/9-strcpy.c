#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return temp;
}

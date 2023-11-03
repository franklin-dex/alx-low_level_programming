#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes from s2
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to concatenate from s2
 *
 * Return: A pointer to the concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len = 0, s2_len = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len])
		s1_len++;

	while (s2[s2_len])
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	result = malloc(s1_len + n + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		result[i] = s1[i];

	for (i = 0; i < n; i++)
		result[i + s1_len] = s2[i];

	result[s1_len + n] = '\0';

	return (result);
}

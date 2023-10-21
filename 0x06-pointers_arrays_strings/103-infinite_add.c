#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: A pointer to the result (r), or 0 if the result can't be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i, j, carry = 0, n1_digit, n2_digit, sum;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		n1_digit = (i >= 0) ? n1[i] - '0' : 0;
		n2_digit = (j >= 0) ? n2[j] - '0' : 0;

		sum = n1_digit + n2_digit + carry;
		carry = sum / 10;
		r[size_r - 1] = (sum % 10) + '0';

		size_r--;
	}

	if (size_r > 0 && carry)
	{
		r[size_r - 1] = carry + '0';
		size_r--;
	}

	if (size_r > 0)
		return (&r[size_r]);
	else
		return (0);
}

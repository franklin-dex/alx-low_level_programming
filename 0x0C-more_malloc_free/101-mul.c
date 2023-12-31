#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

int is_digit(char *str)
{
	if (str == NULL)
		return (0);

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

char *multiply(char *num1, char *num2)
{
	int len1, len2, len;
	int *result;
	char *res_str;

	len1 = strlen(num1);
	len2 = strlen(num2);
	len = len1 + len2;
	result = calloc(len, sizeof(int));

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int sum = mul + result[i + j + 1];
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	while (len > 0 && result[len - 1] == 0)
		len--;

	res_str = malloc(len + 1);

	if (res_str == NULL)
	{
		free(result);
		printf("Error\n");
		exit(98);
	}

	for (int i = 0; i < len; i++)
		res_str[i] = result[i] + '0';

	res_str[len] = '\0';
	free(result);

	return (res_str);
}

int main(int argc, char *argv[])
{
	char *num1, *num2, *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (strcmp(num1, "0") == 0 || strcmp(num2, "0") == 0)
	{
		printf("0\n");
		return (0);
	}

	result = multiply(num1, num2);

	printf("%s\n", result);
	free(result);

	return (0);
}

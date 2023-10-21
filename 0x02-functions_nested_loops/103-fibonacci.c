#include <stdio.h>

/**
 * main - entry point of the code
 *
 * Return: always 0
 */

int main(void)
{
	long long int prev = 1, current = 2, next;
	long long int sum = 0;

	while (current <= 4000000)
	{
		if (current % 2 == 0)
		{
			sum += current;
		}

		next = prev + current;
		prev = current;
		current = next;
	}

	printf("%lld\n", sum);

	return (0);
}

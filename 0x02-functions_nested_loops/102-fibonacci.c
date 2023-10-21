#include <stdio.h>

/**
 * main - entry point of the code
 *
 * Return: always 0
 */
int main(void)
{
	int prev = 1, current = 2, next;
	int sum = 0;

	printf("%d,%d,", prev, current);

	while (current <= 4000000)
	{
		next = prev + current;
		if (next % 2 == 0)
		{
			sum += next;
		}
		prev = current;
		current = next;
		if (current <= 4000000)
		{
			printf("%d", current);
			if (current <= 3999998)
				printf(", ");
		}
	}

	printf("\nSum of even-valued terms:%d\n", sum);

	return (0);
}

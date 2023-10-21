#include <stdio.h>
/**
 * main - entry of the code
 *
 * Return: always 0
 */
int main(void)
{
	long long int prev = 1, current = 2, next;
	int count;

	printf("%lld,%lld,", prev, current);

	for (count = 3; count <= 50; count++)
	{
		next = prev + current;
		printf("%lld", next);

		if (count < 50)
			printf(",");
		else
			printf("\n");

		prev = current;
		current = next;
	}

	return (0);
}

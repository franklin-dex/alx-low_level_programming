#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;
	srand(time(0));
	n =rand() - RAND_MAX / 2;

	printf("The number is: %d\n",n);

	if (n > 0)
	{
		printf("is positive\n");
	}

	else (n == 0)
	{
		printf("is zero\n");
	}

	else (n < 0)
	{
		printf("is negative\n");
	}

	return 0;
}

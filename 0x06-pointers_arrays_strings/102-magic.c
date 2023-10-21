#include <stdio.h>

/**
 * main - entry point of the code
 *
 * Return: 0 always
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * Write your line of code here.
	 * You can set the value of *p to 98 without modifying p.
	 * This will print "a[2] = 98".
	 */
	*p = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}

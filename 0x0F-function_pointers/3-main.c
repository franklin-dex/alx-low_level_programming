#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point for a simple calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 upon successful execution, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	int num1 = atoi(argv[1]);
	char *operator = argv[2];
	int num2 = atoi(argv[3]);

	int (*operation)(int, int);

	operation = get_op_func(operator);

	int result = operation(num1, num2);

	printf("%d\n", result);

	return (0);
}

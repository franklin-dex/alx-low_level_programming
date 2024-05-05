#include "3-calc.h"
#include <stdlib.h>
/**
 * main - Entry point for a simple calculator program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 upon successful execution, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operator;
	int (*operation)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	operation = get_op_func(operator);
	result = operation(num1, num2);

	_putchar("%d\n", result);

	return (0);
}

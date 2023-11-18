#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to print
 * Return: 1 on success, -1 on error
 */
int _putchar(char c);

/**
 * check_args - Checks the number of arguments
 * @argc: Argument count
 * Return: 0 if argc is 2, else 1
 */
int check_args(int argc);

/**
 * parse_cents - Parses the cents argument
 * @arg: Cents argument as a string
 * Return: Parsed cents as an integer
 */
int parse_cents(char *arg);

/**
 * calculate_coins - Calculates the minimum number of coins
 * @cents: Amount in cents
 * Return: Minimum number of coins
 */
int calculate_coins(int cents);

/**
 * print_minimum_coins - Prints the minimum number of coins
 * @min_coins: Minimum number of coins
 */
void print_minimum_coins(int min_coins);

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents;

	if (check_args(argc) != 0)
		return (1);

	cents = parse_cents(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	int min_coins = calculate_coins(cents);

	print_minimun_coins(min_coins);

	return (0);
}

/**
 * check_args - Checks the number of arguments
 * @argc: Argument count
 * Return: 0 if argc is 2, else 1
 */
int check_args(int argc)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

/**
 * parse_cents - Parses the cents argument
 * @arg: Cents argument as a string
 * Return: Parsed cents as an integer
 */
int parse_cents(char *arg)
{
	return (atoi(arg));
}

/**
 * calculate_coins - Calculates the minimum number of coins
 * @cents: Amount in cents
 * Return: Minimum number of coins
 */
int calculate_coins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int min_coins = 0;

	for (int i = 0; i < num_coins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			min_coins++;
		}
	}

	return (min_coins);
}

/**
 * print_minimum_coins - Prints the minimum number of coins
 * @min_coins: Minimum number of coins
 */
void print_minimum_coins(int min_coins)
{
	printf("%d\n", min_coins);
}


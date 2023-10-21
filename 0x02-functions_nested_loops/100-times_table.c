#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The times table to print.
 * main - entry for the code
 * Return: void.
 */
void print_times_table(int n)
{
    if (n > 15 || n < 0)
        return;

    int i, j, product;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            product = i * j;

            if (j == 0)
            {
                printf("%d", product);
            }
            else
            {
                printf("\t%d", product);
            }
        }
        printf("\n");
    }
}

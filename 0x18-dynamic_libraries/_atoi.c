#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
    int result = 0;  /* Initialize the result variable */
    int sign = 1;    /* Initialize the sign variable */

    /* Skip leading whitespace */
    while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
        s++;

    /* Check for sign */
    if (*s == '-')
    {
        sign = -1;  /* Update the sign for negative numbers */
        s++;        /* Move past the '-' sign */
    }
    else if (*s == '+')
    {
        s++;        /* Move past the '+' sign */
    }

    /* Convert characters to integer until a non-digit character is encountered */
    while (*s >= '0' && *s <= '9')
    {
        result = result * 10 + (*s - '0'); /* Update result */
        s++;                               /* Move to the next character */
    }

    /* Apply sign */
    return sign * result;
}

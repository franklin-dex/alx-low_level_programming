#include "main.h"

/**
 * _puts - prints a string to stdout
 * @s: the string to print
 *
 * Return: None
 */
void _puts(char *s)
{
    /* Iterate through the string until the null terminator is reached */
    while (*s != '\0')
    {
        /* Print each character of the string */
        _putchar(*s);
        s++; /* Move to the next character in the string */
    }

    /* Print a newline character to end the line */
    _putchar('\n');
}

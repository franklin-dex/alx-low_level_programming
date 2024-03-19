#include "main.h"

/**
 * _strncpy - copies up to n characters from source to destination
 * @dest: the destination buffer
 * @src: the source string
 * @n: the maximum number of characters to copy
 *
 * Return: the pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *ptr = dest; /* Store the starting address of dest */

    /* Copy characters from src to dest up to n characters */
    while (*src != '\0' && n > 0)
    {
        *dest = *src; /* Copy character from src to dest */
        dest++;       /* Move to the next character in dest */
        src++;        /* Move to the next character in src */
        n--;          /* Decrement the number of characters remaining */
    }

    /* If n is greater than the length of src, pad dest with null characters */
    while (n > 0)
    {
        *dest = '\0'; /* Pad dest with null characters */
        dest++;       /* Move to the next character in dest */
        n--;          /* Decrement the number of characters remaining */
    }

    return ptr; /* Return the pointer to the destination buffer */
}

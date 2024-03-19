#include "main.h"

/**
 * _strncat - concatenates n characters from src to dest
 * @dest: the destination string
 * @src: the source string to append to dest
 * @n: the maximum number of characters to append
 *
 * Return: the pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
    char *ptr = dest; /* Store the starting address of dest */

    /* Move to the end of the destination string */
    while (*dest != '\0')
        dest++;

    /* Append at most n characters from src to dest */
    while (*src != '\0' && n > 0)
    {
        *dest = *src; /* Copy character from src to dest */
        dest++;       /* Move to the next character in dest */
        src++;        /* Move to the next character in src */
        n--;          /* Decrement the number of characters remaining */
    }

    *dest = '\0'; /* Append null terminator to the concatenated string */

    return ptr; /* Return the pointer to the destination string */
}

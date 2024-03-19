#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the pointer to the memory area to be filled
 * @b: the value to be set
 * @n: the number of bytes to be set to the value
 *
 * Return: the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s; /* Store the starting address of s */

    /* Fill n bytes of memory area pointed to by s with value b */
    while (n > 0)
    {
        *s = b; /* Set the value b at the current memory location */
        s++;    /* Move to the next byte in memory */
        n--;    /* Decrement the number of bytes remaining */
    }

    return ptr; /* Return the pointer to the memory area s */
}

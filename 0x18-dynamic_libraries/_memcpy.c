#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: the pointer to the destination memory area
 * @src: the pointer to the source memory area
 * @n: the number of bytes to copy
 *
 * Return: the pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *ptr = dest; /* Store the starting address of dest */

    /* Copy n bytes from src to dest */
    while (n > 0)
    {
        *dest = *src; /* Copy byte from src to dest */
        dest++;       /* Move to the next byte in dest */
        src++;        /* Move to the next byte in src */
        n--;          /* Decrement the number of bytes remaining */
    }

    return ptr; /* Return the pointer to the destination memory area */
}

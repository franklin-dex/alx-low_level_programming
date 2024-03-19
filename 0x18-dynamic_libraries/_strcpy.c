#include "main.h"

/**
 * _strcpy - copies a string from source to destination
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: the pointer to the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
    char *ptr = dest; /* Store the starting address of dest */

    /* Copy characters from source to destination until null terminator is reached */
    while (*src != '\0')
    {
        *dest = *src; /* Copy character from source to destination */
        dest++;       /* Move to the next character in the destination buffer */
        src++;        /* Move to the next character in the source string */
    }

    *dest = '\0'; /* Append null terminator to the destination string */

    return ptr; /* Return the pointer to the destination buffer */
}

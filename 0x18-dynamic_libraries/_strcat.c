#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string to append to dest
 *
 * Return: the pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
    char *ptr = dest; /* Store the starting address of dest */

    /* Move to the end of the destination string */
    while (*dest != '\0')
        dest++;

    /* Copy characters from src to the end of dest */
    while (*src != '\0')
    {
        *dest = *src; /* Copy character from src to dest */
        dest++;       /* Move to the next character in dest */
        src++;        /* Move to the next character in src */
    }

    *dest = '\0'; /* Append null terminator to the concatenated string */

    return ptr; /* Return the pointer to the destination string */
}

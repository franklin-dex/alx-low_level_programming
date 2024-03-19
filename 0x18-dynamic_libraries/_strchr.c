#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates the first occurrence of a character in a string
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: a pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
    /* Iterate through the string until the null terminator is reached */
    while (*s != '\0')
    {
        /* Check if the current character matches the desired character */
        if (*s == c)
            return s; /* Return a pointer to the current character */
        s++;         /* Move to the next character in the string */
    }

    /* If the character is not found, return NULL */
    return NULL;
}

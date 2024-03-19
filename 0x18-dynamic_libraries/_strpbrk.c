#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the string containing the characters to search for
 *
 * Return: a pointer to the first occurrence in s of any of the characters in accept,
 * or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
    /* Iterate through the string s */
    while (*s != '\0')
    {
        char *a = accept; /* Pointer to iterate through the accept string */

        /* Iterate through the accept string to check if the current character of s is in accept */
        while (*a != '\0')
        {
            /* Check if the current character of s matches the current character of accept */
            if (*s == *a)
            {
                return s; /* Return a pointer to the current character of s */
            }
            a++; /* Move to the next character in accept */
        }

        s++; /* Move to the next character in s */
    }

    return NULL; /* Return NULL if no matching character is found */
}

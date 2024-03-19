#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the string containing the characters to match
 *
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0; /* Initialize the count of matching characters */

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
                count++; /* Increment the count */
                break;   /* Exit the inner loop */
            }
            a++; /* Move to the next character in accept */
        }

        /* If the current character of s is not in accept, exit the outer loop */
        if (*a == '\0')
            break;

        s++; /* Move to the next character in s */
    }

    return count; /* Return the count of matching characters */
}

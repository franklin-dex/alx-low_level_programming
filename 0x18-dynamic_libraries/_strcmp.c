#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: an integer less than, equal to, or greater than zero if s1 is found,
 * respectively, to be less than, to match, or be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
    /* Iterate over both strings until a difference is found or until one string ends */
    while (*s1 && (*s1 == *s2))
    {
        s1++; /* Move to the next character in the first string */
        s2++; /* Move to the next character in the second string */
    }

    /* Return the difference in ASCII values of the differing characters */
    return (*s1 - *s2);
}

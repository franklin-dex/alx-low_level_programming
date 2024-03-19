#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to locate
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    char *start; /* Pointer to store the starting position of the potential match */
    char *substr; /* Pointer to iterate through the potential match */
    
    /* Iterate through the haystack string */
    while (*haystack != '\0')
    {
        start = haystack; /* Store the current position of haystack */
        substr = needle; /* Initialize substr with the beginning of the needle */

        /* Compare characters of haystack and needle while both are not NULL */
        while (*substr != '\0' && *haystack != '\0' && *haystack == *substr)
        {
            haystack++; /* Move to the next character in haystack */
            substr++; /* Move to the next character in needle */
        }
        
        /* Check if needle is fully traversed, indicating a match */
        if (*substr == '\0')
            return start; /* Return a pointer to the start of the match */
        
        haystack = start + 1; /* Move to the next character in haystack */
    }

    return NULL; /* Return NULL if no match is found */
}

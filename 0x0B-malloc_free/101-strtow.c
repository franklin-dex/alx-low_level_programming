#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
    char **word_matrix;
    char *current_word;
    int i, len = 0, word_count = 0;

    if (str == NULL || str[0] == '\0')
        return (NULL);

    while (str[len])
        len++;

    word_matrix = (char **) malloc(sizeof(char *) * (len + 1));

    if (word_matrix == NULL)
        return (NULL);

    current_word = strtok(str, " ");

    while (current_word != NULL)
    {
        word_matrix[word_count] = strdup(current_word);

        if (word_matrix[word_count] == NULL)
            return (NULL);

        word_count++;
        current_word = strtok(NULL, " ");
    }

    word_matrix[word_count] = NULL;

    return (word_matrix);
}

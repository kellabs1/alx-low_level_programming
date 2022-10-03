#include <main.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space in memory, or NULL if error
 */

char *str_concat(char *s1, char *s2)
{
    char *ptr = (char *) malloc(sizeof(s1) + sizeof(s2));
    int i = 0;
    int j = 0;

    if (s1 == NULL || s2 == NULL || ptr == NULL)
    {
        return NULL;
    }

    while (s1[i] != '\0')
    {
        ptr[i] = s1[i];
        i++;
    }

    while (s2[j])
    {
        ptr[i] = s2[j];
        i++;
        j++;
    }
    return ptr;
    free(ptr);
}

#include "main.h"
/**
 * string_toupper - converts lowercase to uppercase
 * @a: variable containing string to be changed
 *
 * Return: pointer to a
 */

char *string_toupper(char *a)
{

int i;

i = 0;

while (a[i])
{

if (a[i] >= 'a' && a[i] <= 'z')
{

a[i] += 'A' - 'a';

}
i++;
}
return a;
}

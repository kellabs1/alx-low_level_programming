/**
 * _strlen - Gives length of string
 *@s: First pointer variable
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

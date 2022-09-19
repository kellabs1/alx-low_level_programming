/**
 * swap_int - swap two pointer variables
 *@*a: First pointer variable
 *@*b: Second pointer variable
 *
 * Return: nothing

 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

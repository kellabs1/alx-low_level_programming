#include "function_pointers.h"

/**
 * array_iterator - executes a func given as a param on each element of array
 * @array: array to be processed by action
 * @size: size of array
 * @action: pointer to the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}

#include "function_pointers.h"
/**
 * array_iterator - execute each element as an array
 * @array: The array
 * @size: The size of the array
 * @action: pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

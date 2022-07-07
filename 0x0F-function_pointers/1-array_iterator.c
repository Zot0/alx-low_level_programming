#include <function_pointers.h>

/**
 * array_iterator - Executes a function as a parameter of each element of array
 * @array: Array
 * @size: Size of array
 * @action: Pointer to a function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

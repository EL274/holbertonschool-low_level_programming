#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator:function given as a parameter on each element of an array
 *@size: size of the array
 *@action: pointer to function
 *Return:void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}

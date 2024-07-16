#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *))
{
	if (array != NULL && action != NULL && size >0)
	{
		for(i = 0; i < size ; i++)
		{
		action(array[i]);
		}
	}
}

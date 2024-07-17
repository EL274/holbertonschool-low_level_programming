#include"function_pointers.h"
#include <stdio.h>
/**
 * int int_index the function
 *@size: the number of elements in the array
 *@cmp :the pointer of the function tobe used to compare values
 *return (-1)
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i =0 ;
	if (size >0)
	{
		if (array !=NULL && cmp !=NULL)
		{
			while (i < size )
			{
				if (cmp(array[i]))
					return (i);
				i++;}
		}
	}
	return (-1);
}

#include"function_pointers.h"
#include <stdio.h>
/**
 * int int_index -searches for an integer in an array using a comparaison function.
 *@array: the array of integers
 *@size: the number of elements in the array
 *@cmp :the pointer of the function tobe used to compare values
 *return:the index of the first element for which cmp function does not return 0.
 *If no element matches ; or if size <=0 or array/cmp is NULL, return -1
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{	int i =0 ;
	if (size >0)
	{
		if (array !=NULL && cmp !=NULL)
		{
			while (i < size )
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}

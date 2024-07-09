#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
	array= malloc((size + 1)* sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	  array[i] = c;
	}

	array[size]= '\0';

    return array;
}

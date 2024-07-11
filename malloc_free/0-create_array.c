#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars, and initializes it w/ a char
 * @size: input size of array
 * @c: initializing char
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{

    char *array;
    unsigned int i;

	array = malloc(sizeof(char) * size);
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

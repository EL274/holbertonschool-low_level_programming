#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a
*2 dimensional array of integers.
*@width: width oàf array
*@height: height of array
*
*Return: pointer to the array
*/
int **alloc_grid(int width, int height)
{       int i,j;
	int** array=(int**)malloc(width *sizeof(int*));
	if (array == NULL){
return NULL;
	}
	for( i=0; i < width; i++){
		array[i]=(int*)malloc(height *sizeof(int));
		if (array[i] == NULL)
		{
			for (j=0; j<i ;j++){
				free(array[j]);
			}
			free(array);
			return NULL;
		}
	}
	for(i=0 ; i < width ; i++){
		for(j=0 ;j <height ;j++){
			array[i]=0;
		}
	}
	return array;
}



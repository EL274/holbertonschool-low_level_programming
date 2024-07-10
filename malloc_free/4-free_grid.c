#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid frees a 2d
 * @grid: memory block to be free
 * @height: height of array
 *return: returns void
 */
void free_grid(int **grid, int height)
{
	int i; 
		for (i = 0; i < height ; i++)
		{
			free(grid[i]);
		}
	free(grid);
}

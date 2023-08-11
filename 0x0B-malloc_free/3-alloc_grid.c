#include "main.h" 
#include <stdlib.h>
/*
 * This code defines a function named alloc_grid that creates a 2-dimensional grid of integers, with a given width and height. The function takes two integer arguments:
 *  width and height, which represent the width and height of the grid, respectively.
 *  The function returns a pointer to a 2-dimensional array of integers, which represents the grid.
 */
int **alloc_grid(int width, int height)
{
int **mee;
int x, y;
if (width <= 0 || height <= 0) return (NULL);
mee = malloc(sizeof(int *) * height);

if (mee == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
mee[x] = malloc(sizeof(int) * width);

if (mee[x] == NULL)
   {
	for (; x >= 0; x--)
	free(mee[x]);

	free(mee);
	return (NULL);
    }
}
for (x = 0; x < height; x++) 
{ 
for (y = 0; y < width; y++) 
mee[x][y] = 0; 
}
return (mee);
}

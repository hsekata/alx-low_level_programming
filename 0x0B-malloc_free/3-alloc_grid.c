#include <stdlib.h>
/**
 * alloc_grid - allocates a grid, make space and free space
 * @width: takes in width of grid
 * @height: height of grid
 * Return: grid with freed spaces
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	array = (int **) malloc(width * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		array[i] = (int *) malloc (height * sizeof(int));
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}

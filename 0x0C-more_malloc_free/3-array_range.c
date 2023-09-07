#include <stdlib.h>
/**
 * array_range - creates an array
 * @min: parameter for minimum
 * @max: parameter for maximum
 * Return: array of integers or NULL
 */
int *array_range(int min, int max)
{
	int *arr, i, j;

	j = max - min + 1;
	if (min > max)
		return (NULL);
	arr = (int *) malloc(sizeof(int) * j);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= j; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}

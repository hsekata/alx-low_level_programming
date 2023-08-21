#include <stdio.h>

/**
 * print_array - prints every other character of a string
 * @a: pointer to intiger type
 * @n: size of the array a
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		char val = a[i];

		if (i == n -1)
			printf("%d", a[i]);  
		else
		{
			printf("%d", a[i]);
			printf(", ");
		}
	}
	printf("n");
}

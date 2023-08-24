/**
 * reverse_array - reversies arrays
 * 
 * @a: array 
 * @n: number of elements of the array
 * 
 */

void reverse_array(int *a, int n)
{
	int i, j, val;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			val = a[j];
			a[j] = a[j - 1];
			a[j - 1] = val;
		}
	
	}
}

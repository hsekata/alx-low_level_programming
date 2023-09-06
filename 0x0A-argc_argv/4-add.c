#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the sum 
 *@argc: counts number of arguments from the command line
 *@argv: string of array i.e strings from the command line
 *Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) != 0)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

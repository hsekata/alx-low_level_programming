#include <stdio.h>
/**
 *main - prints the number of arguments passed on command line
 *@argc: counts number of arguments from the command line
 *@argv: string of array i.e strings from the command line
 *Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int i, count = 0;
 
	for (i = 0; i < argc; i++)
	{
		if (argv[i] != NULL)
			count += 1;
		else
			break;
	}
	printf("%d\n", count - 1);
	return (0);
}

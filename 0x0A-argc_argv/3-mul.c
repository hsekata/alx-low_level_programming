#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the name of the excutable file
 *@argc: counts number of arguments from the command line
 *@argv: string of array i.e strings from the command line
 *Return: returns 0 on success
 *Return: returns 1 on failure
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

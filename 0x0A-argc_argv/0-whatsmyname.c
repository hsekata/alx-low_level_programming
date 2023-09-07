#include <stdio.h>
/**
 *main - prints the name of the excutable file
 *@argc: counts number of arguments from the command line
 *@argv: string of array i.e strings from the command line
 *Return: returns 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		break;
	}
	return (0);
}

#include <stdio.h>
/**
 *main - prints the name of the excutable file
 *@argc: counts number of arguments from the command line
 *@argv: string of array i.e strings from the command line
 *return: returns 0 on success
 */ 
int main(int argc, char* argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

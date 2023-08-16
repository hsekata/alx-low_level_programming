#include <unistd.h>

/**
 * add - writes the int x and y to stdout
 * @x: The intiger to print
 *@y: The intiger to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 */
int add(int x, int y)
{
	return (x + y);
}

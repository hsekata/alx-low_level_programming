#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{ 
    int i,j,su1,su2;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {   
            if (i == j)
                continue;
            else if (i > j)
                continue;
            else 
            {
            su1 = putchar(48 + i);
            su2 = putchar(48 + j);
            if (i == 8 && j == 9)
                continue;
            else
            {
            putchar(',');
            putchar(' ');
            }
            }
            
        }

    }
    putchar('\n');
	return (0);
}

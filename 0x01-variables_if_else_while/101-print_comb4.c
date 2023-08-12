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
    int i,j,k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k <10; k++)
            {
                
                if (i == j == k)
                    continue;
                else if (i >= j || i >= k)
                    continue;
                else if (j >= k)
                    continue;
                else
                {
                    putchar(i + 48);
                    putchar(j + 48);
                    putchar(k + 48);
                    if (i ==7 && j ==8 && k == 9)
                        break;
                    else
                    {
                    putchar(',');
                    putchar(' ');
                    }
                }
            }
        }
        
    }
    putchar('\n');
	return (0);
}

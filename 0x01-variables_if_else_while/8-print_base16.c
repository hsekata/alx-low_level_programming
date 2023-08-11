#include <stdio.h>
int main(void)
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

{
    char start = 'a';
    char end = 'f';
    int i;
    for (i = 0; i < 10; i++)
        putchar(48 + i);    
    while (start <= end)
    {   putchar(start);
        start++;
    }
    putchar('\n')
    return 0;
}

#include <stdio.h>
int main(void)
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
{
    char start = 'a';
    char end = 'z';
    char end1 = 'Z';
    char start1 = 'A';
    while (start <= end)
    {
        putchar(start);
        start++;
    }
    while (start1 <= end1)
    {
        putchar(start1);
        start1++;
    }
    return (0);
}

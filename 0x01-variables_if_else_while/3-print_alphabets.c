#include <stdio.h>
int main(void)
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
}

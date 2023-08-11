#include <stdio.h>
int main(void)
{
    char start = 'a';
    char end = 'f';
    int i;
    for (i = 0;i < 10;i++)
        putchar(48 + i);    
    while (start <= end)
    {   putchar(start);
        start++;
    }
    return 0;
}

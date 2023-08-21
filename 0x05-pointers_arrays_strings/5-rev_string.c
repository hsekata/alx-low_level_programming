#include <stdio.h>
void rev_string(char *s)
{
    int count = 0, i = 0, j, counter;
    
    while (s[i] != '\0')
    {
        count += 1;
        i++;
    }
    char val[count];
    
    for ( j = 0; j < count; j++)
    {
        
        val[count -1] = s[j];
        count--;
        
    }
    *s = val[count];
    
}
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
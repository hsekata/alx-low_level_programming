#include <stdio.h>
int main(void)
{
	int i;
   	int count = 0;
    	for (i = 0; i < 1024; i++)
    	{

        	if (i % 3 ==0 || i % 5 == 0)
		{	
			count +=i;
        	}
    	}
    	printf("%d\n", count);

	return (0);
}

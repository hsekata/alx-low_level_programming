/**
 * _puts - prints string followed by a new line
 * @str: pointer to character type
 *
 */
void _puts(char *str)
{
 	int count = 0, i = 0;

    	while (str[i] != '\0')
    	{
        	count += 1;
        	i++;
    	}

    	for (int j = 0; j < count; j++)
    	{  
	    	char val;

        	val = str[j];
        	_putchar(val);
        }
    	_putchar('\n');
}

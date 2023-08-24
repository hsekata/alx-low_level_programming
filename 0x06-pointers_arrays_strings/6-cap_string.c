/**
 * cap_string - writes words with upper casw
 * @x: pointer to character which carries from the main fuction and dereference
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *cap_string(char *);
char *cap_string(char *x)
{
	int count = 0, i = 0, j = 0;

	while (x[i] != '\0')
	{
		count++;
		i++;
	}
	for (; j < count - 1; j++ )
	{
		if (x[j] == ' ' || x[j] == '.' || x[j] == '\n')
		{
			if (*(x + (j + 1)) >= 97 && *(x + (j + 1)) <= 122)
				*(x + (j + 1)) = *(x + (j + 1)) - 32;
			else
				continue;
		}
		else if (x[j] == 9)
		{
			*(x + j) = ' ';
			*(x + (j + 1)) = *(x + (j + 1)) - 32;
		}
	}

	return (x);
}

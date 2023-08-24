/**
 * string_toupper - writes the charactes to upper case
 * @x: pointer to character
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_toupper(char *);
char *string_toupper(char *x)
{
	int count = 0, i = 0, j = 0;

	while (x[i] != '\0')
	{
		count++;
		i++;
	}
	for (; j < count - 1; j++)
	{
		if ((x[j] >= 97) && (x[j] <= 122))
			*(x + j) = *(x + j) - 32;
		else
			continue;
	}
	return (x);



}

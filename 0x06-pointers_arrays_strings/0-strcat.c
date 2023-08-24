/**
 * _strncat - concatnates string from one to other
 * @dest: the destination string
 *@src: carries source string
 * Return: returns pointer as dest.
 * 
 */
char *_strcat(char *dest, char *src)
{
	int count1 = 0, i = 0, count = 0, j = 0;

	while (src[i] != '\0')
	{
		count1 += 1;
		i++;
	}
	while (dest[j] != '\0')
	{
		count += 1;
		j++;
	}
	for (i = 0; i < count1; i++)
		dest[count + i] = src[i];
	dest[count + i] = '\0';

	return (dest);
}

/**
 * _strcmp - compares characters of arrays
 * @s1: pointer to character
 * @s2: another pointer to character which carries value to be compared to s1
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strcmp(char *s1, char *s2)
{

	int count = 0, count1 = 0, i, j, max, value;

	while (s1[i] != '\0')
	{
		count1 += 1;
		i++;
	}
	while (s1[j] != '\0')
	{
		count += 1;
		j++;
	}
	if (count1 >= count)
		max = count1;
	else
		max = count;
	if (s1 == s2)
		return (0);
	for (i = 0; i < max; i++)
	{
		if (s1[i] == s2[i])
			continue;
		else if (s1[i] > s2[i])
		{
			value = s1[i] -s2[i];
			break;
		}
		else
		{
			value = s1[i] -s2[i];
			break;
		}
	
	}
	return (value);
}

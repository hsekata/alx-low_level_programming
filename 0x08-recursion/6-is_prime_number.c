/**
 * prime - fuction that checks whether prime or not
 * @n: integer to be checked
 * @a: integer to be  checked
 * @b: divides a 
 * return: returns values depending on conditions
 */
int prime(int, int);
int is_prime_number(int n)
{
	if (n <=0)
		return 0;
	if (n == 1)
		return (0);
	return (prime(n, 2));
}
int prime(int a, int b)
{
	if (a % b == 0)
	{
		if (a == b)
			return (1);
		else
			return (0);
	}
	return (prime(a, b + 1));
}

/**
 * swap_int - swaps integers when called in the main function
 * @a: pointer that carries the address of varaible a
 * @b:  pointer that carries the address of varaible b
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void swap_int(int *a, int *b)
{
	int hold ;

	int *address_hold = &hold;

	*address_hold = *a;
	*a = *b;
	*b = *address_hold;
}

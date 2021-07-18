#include "holberton.h"
/**
 * reverse_array - reverses the content of an array integer
 * @a: is the name of the array
 * @n: is the total element of the array
 *
 * Return: output returns the reverse elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, k;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		k = a[i];
		a[i] = a[n];
		a[n--] =  k;
	}
}

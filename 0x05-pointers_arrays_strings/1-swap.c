#include "holberton.h"
/**
 * swap_int - swaps the value of two variables
 * @a: is the first variable
 * @b: is the second variable
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a, *a = *b, *b = p;
}

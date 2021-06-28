#include "holberton.h"

/**
 * print_triangle = prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, ch;

		for (i = 1; i <= size; i++)
		{
			for (ch = i; j < size; j++)
			{
				_putchar(' ');
			}

			for (ch = 1; ch <= i; ch++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

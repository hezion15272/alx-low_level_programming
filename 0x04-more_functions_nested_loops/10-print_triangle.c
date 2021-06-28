#include "holberton.h"

/**
<<<<<<< HEAD
 * print_triangle = prints a triangle, followed by a new line
=======
 * print_triangle - prints a triangle, followed by a new line
>>>>>>> e0d23ee51dfebccea7df63a4d92ff54b0a19e609
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
<<<<<<< HEAD
			for (ch = i; j < size; j++)
=======
			for (ch = i; ch < size; ch++)
>>>>>>> e0d23ee51dfebccea7df63a4d92ff54b0a19e609
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

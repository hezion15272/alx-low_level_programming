#include <stdio.h>
#include "holberton.h"
/**
 * print_array - prints intergers stored in an array
 *@a:interger to be printed that is a pointer
 *@n:interger to be printed
 *
 */
void print_array(int *a, int n)
{

int i = 0;
while (i < n)
{
printf("%d", a[i]);
if (i < (n - 1))
printf(", ");
i++;
}
printf("\n");
}

#include <stdio.h>

int main(void)
{
	char c;
	int i;
	long int li;
	long long int l2i;
	float f;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(l2i));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}

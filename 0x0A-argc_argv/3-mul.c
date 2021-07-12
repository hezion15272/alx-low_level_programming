#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i = argc - 1;
if (i != 2)
{
printf("Error\n");
return (1);
}
else
{
printf("%d\n", atoi(argv[i]) * atoi(argv[i - 1]));
return (0);
}
}

#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - outputs a name
 * @name: name is the variable which holds a value
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

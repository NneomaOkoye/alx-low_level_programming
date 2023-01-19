#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: the name given
 * @f: function of name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name != NULL && f != NULL)
		f(name);
}

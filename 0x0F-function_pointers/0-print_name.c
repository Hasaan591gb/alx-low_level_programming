#include "function_pointers.h"

/**
 * print_name - a function that prints name using
 *		a callack function
 * @name: name to print
 * @f: function to callback
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

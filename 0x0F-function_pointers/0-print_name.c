#include "function_pointers.h"

/**
 * print_name - it prints a name.
 * @name: parameter that holds the name to print
 * @f: a function to a pointer
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

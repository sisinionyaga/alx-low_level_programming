#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - it will print the name using pointer to function
 * @name: the string to add
 * @f: its a pointer to function
 * Return: nothing will be returned
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

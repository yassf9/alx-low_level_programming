#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: pointer to a string name
 * @(*f)(char *): points to a function that takes a char pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

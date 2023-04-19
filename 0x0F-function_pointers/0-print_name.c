#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: pointer to a string name
 * @(*f)(char *): points to a function that takes a char pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	_putchar('N');
	_putchar('a');
	_putchar('m');
	_putchar('e');
	f(name);
}

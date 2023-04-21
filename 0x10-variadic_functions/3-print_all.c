#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_c - Prints a char
 * @args: The list of arguments
 */
void print_c(va_list args)
{
printf("%c", va_arg(args, int));
}
/**
 * print_i - Prints an int
 * @args: The list of arguments
 */
void print_i(va_list args)
{
printf("%d", va_arg(args, int));
}
/**
 * print_f - Prints a float
 * @args: The list of arguments
 */
void print_f(va_list args)
{
printf("%f", va_arg(args, double));
}
/**
 * print_s - Prints a string
 * @args: The list of arguments
 */
void print_s(va_list args)
{
char *s = va_arg(args, char *);
if (s == NULL)
{
printf("(nil)");
return;
}
printf("%s", s);
}
/**
 * print_all - Prints anything
 * @format: The list of types of arguments
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, j;
char *separator = "";
print_fn_t print_fn[] = {
{'c', print_c},
{'i', print_i},
{'f', print_f},
{'s', print_s},
{'\0', NULL}
};
va_start(args, format);
while (format && format[i])
{
j = 0;
while (print_fn[j].type)
{
if (format[i] == print_fn[j].type)
{
printf("%s", separator);
print_fn[j].fn(args);
separator = ", ";
}
j++;
}
i++;
}
printf("\n");
va_end(args);
}

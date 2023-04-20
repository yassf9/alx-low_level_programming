#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a char
 * @valist: the argument list
 */
void print_char(va_list valist)
{
printf("%c", va_arg(valist, int));
}
/**
 * print_int - prints an int
 * @valist: the argument list
 */
void print_int(va_list valist)
{
printf("%d", va_arg(valist, int));
}
/**
 * print_float - prints a float
 * @valist: the argument list
 */
void print_float(va_list valist)
{
printf("%f", va_arg(valist, double));
}
/**
 * print_string - prints a string
 * @valist: the argument list
 */
void print_string(va_list valist)
{
char *s = va_arg(valist, char *);

if (s == NULL)
s = "(nil)";
printf("%s", s);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list valist;
int i = 0, j = 0;
char *separator = "";
char *current_format;
typedef struct print_fn
{
char type;
void (*fn)(va_list);
} print_fn_t;
print_fn_t print_fn[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{0, NULL}
};
va_start(valist, format);
while (format && format[i])
{
j = 0;
current_format = NULL;
while (print_fn[j].fn != NULL)
{
if (print_fn[j].type == format[i])
{
current_format = &print_fn[j].type;
break;
}
j++;
}
if (current_format != NULL)
{
printf("%s", separator);
print_fn[j].fn(valist);
separator = ", ";
}
i++;
}
printf("\n");
va_end(valist);
}

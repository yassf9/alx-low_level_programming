#include "main.h"
/**
 * more_numbers - prints 01234567891011121314 10 times, folowed by a new line
 * Return:void
 */
void more_numbers(void)
{
int i, c;
for (i = 0; i < 10; i++)
{
for (c = 0; c <= 14; c++)
{
if (c >= 10)
_putchar('1');
_putchar(c % 10 + '0');
}
_putchar('\n');
}
}

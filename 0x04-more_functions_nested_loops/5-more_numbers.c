#include "main.h"
/**
 * more_numbers - prints 01234567891011121314 10 times, folowed by a new line
 * Return:void
 */
void more_numbers(void)
{
int i = 0;
int c;
while (i < 11)
{
for (c = 48; c <= 62; c++)
{
_putchar(c);
}
_putchar('\n');
i++;
}
}

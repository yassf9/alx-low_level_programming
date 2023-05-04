#include "main.h"
#include <stdlib.h>
/**
 * power - power of a number
 *@base: the base
 *@exp: the exponent
 *Return: the result of base raised to exp
 */
unsigned int power(unsigned int base, unsigned int exp)
{
	unsigned int result = 1;

	while (exp--)
		result *= base;
	return (result);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: binary, 0(NULL or cha other than 0 & 1)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, s = 0, i;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		if ((b[len - i - 1] == '0') || (b[len - i - 1] == '1'))
			s += (b[len - i - 1] - '0') * power(2, i);
		else
			return (0);
	}
	return (s);
}

#include "main.h"
/**
 * _strlen_recursion -  function that returns the length of a string
 * @s: input
 * Return:the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * compa - compares each character of the string.
 * @s: string
 * @n1: smallest iterator.
 * @n2: biggest iterator.
 * Return: .
 */
int compa(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + compa(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome  - a function that returns the length of a string
 * @s: input
 * Return: 0 if it's not, 1 if it is
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compa(s, 0, _strlen_recursion(s) - 1));
}

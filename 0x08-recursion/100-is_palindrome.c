#include "main.h"
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
 * is_palindrome  - a function that returns the length of a string
 * @s: input
 * Return: 0 if it's not, 1 if it is
 */
int is_palindrome(char *s)
{
	if (_strlen_recursion(s) <= 1)
		return (1);
	else if (*s != s[_strlen_recursion(s) - 1])
		return (0);
	s[_strlen_recursion(s) - 1] = '\0';
	return (is_palindrome(s + 1) && (*s == s[_strlen_recursion(s) - 2]));
}

#include <stdio.h>
#include "main.h"
/**
 * _strchr - function returns a pointer
 * @s: the string
 * @c: the character
 * Return : Always 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < '\0'; i++)
{
		if (s[i] == c)
			return (s + i);
}
	return (NULL);
}

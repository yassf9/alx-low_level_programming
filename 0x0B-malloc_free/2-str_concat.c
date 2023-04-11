#include "main.h"
#include <stdlib.h>
/**
 * str_concat - point to a newly allocated space in memory
 * @s1: string one
 * @s2: string two
 * Return: NULL (empty string or failure), pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, len1 = 0, len2 = 0;

	for (i = 0; s1[i] > '\0'; i++)
		len1++;
	for (i = 0; s2[i] > '\0'; i++)
		len2++;
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	if (s1)
	{
		for (i = 0; i < len1; i++)
		str[i] = s1[i];
	}
	if (s2)
	{
		for (i = len1; i < len2 + len1; i++)
		str[i] = s2[i];
	}
	str[i] = '\0';
	return (str);
}

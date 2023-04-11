#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to the duplicate,NULL if str = NULL
 */
char *_strdup(char *str)
{
	 char *string;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] > '\0'; i++)
		len++;
	string = (char *)malloc(sizeof(char) * (len + 1));

	if (string == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		string[i] = str[i];
	string[len] = '\0';
	return (string);
}

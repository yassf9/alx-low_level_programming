#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *letter = haystack;
		char *pointer = needle;

		while (*letter == *pointer && *pointer != '\0')
		{
			letter++;
			pointer++;
		}
		if (*pointer == '\0')
			return (haystack);
	}
	return (0);
}

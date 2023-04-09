#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cpt;
	int j;

	cpt = 0;

	while (*s)
	{
			for (j = 0; accept[j]; j++)
			{
				if (accept[j] == *s)
				{
					cpt++;
					break;
				}
				else if (accept[j + 1] == '\0')
				return (cpt);
			}
		s++;
	}
	return (cpt);
}

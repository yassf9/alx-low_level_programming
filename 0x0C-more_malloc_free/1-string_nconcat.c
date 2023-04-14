#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2:second  tring
 * @n:bytes
 * Return: pointer(Success), NULL(failure)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int s1_len = 0, s2_len = 0, i = 0, j = 0;
char *result = NULL;

while (s1 && s1[i])
{
s1_len++;
i++;
}
while (s2 && s2[j])
{
s2_len++;
j++;
}
if (n >= s2_len)
n = s2_len;
result = (char *)malloc(s1_len + n + 1);
if (!result)
return (NULL);
i = 0;
while (s1 && s1[i])
{
result[i] = s1[i];
i++;
}
j = 0;
while (s2 && j < n)
{
result[i + j] = s2[j];
j++;
}
result[s1_len + n] = '\0';
return (result);
}

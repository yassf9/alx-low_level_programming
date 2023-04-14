#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int _isdigit(char *s);
void _puts(char *str);
void _multiply(char *num1, char *num2);
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 98 if invalid arguments
 */
int main(int argc, char **argv)
{
if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
{
_puts("Error");
exit(98);
}
_multiply(argv[1], argv[2]);
return (0);
}
/**
 * _isdigit - checks if a string is composed only of digits
 * @s: string to check
 *
 * Return: 1 if true, 0 if false
 */
int _isdigit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}
/**
 * _puts - prints a string followed by a newline to stdout
 * @str: string to print
 */
void _puts(char *str)
{
while (*str)
putchar(*str++);
putchar('\n');
}
/**
 * _multiply - multiplies two positive numbers
 * @num1: first number to multiply
 * @num2: second number to multiply
 */
void _multiply(char *num1, char *num2)
{
int len1 = 0, len2 = 0, i, j, carry, digit1, digit2, product;
int *result;

while (num1[len1])
len1++;
while (num2[len2])
len2++;
result = calloc(len1 + len2, sizeof(int));
if (!result)
{
_puts("Error");
exit(98);
}
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
digit1 = num1[i] - '0';
for (j = len2 - 1; j >= 0; j--)
{
digit2 = num2[j] - '0';
product = (digit1) *(digit2) +carry + result[i + j + 1];
carry = product / 10;
result[i + j + 1] = product % 10;
}
result[i + j + 1] += carry;
}
i = 0;
while (result[i] == 0 && i < len1 + len2 - 1)
i++;
for (; i < len1 + len2; i++)
_putchar(result[i] + '0');
_putchar('\n');
free(result);
}

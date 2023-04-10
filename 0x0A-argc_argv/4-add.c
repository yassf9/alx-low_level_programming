#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: integer
 * @argv: string
 * Return: 0 If no number is passed to the program, 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum;
	char *c;

	while (--argc)
	{
		for ( c = argv[argc] ;* c; c++)
		if (isdigit(*c))
			sum += atoi(argv[argc]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

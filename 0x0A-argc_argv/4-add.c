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

	while (argc--)
	{
		if (isdigit(argv[argc]))
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

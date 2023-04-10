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
	int sum = 0;
	int i = 1;

	while (i < argc)
	{
		char *num = argv[i];
		int j = 0;

		while (num[j])
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(num);
		i++;
	}

	printf("%d\n", sum);
	return (0);
}

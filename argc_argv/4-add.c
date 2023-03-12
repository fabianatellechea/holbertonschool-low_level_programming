#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int j = 0;
	int add;

	for (; argv[i]; i++)
	{
		for (; argv[i][j]; j++)
		{
			if (argc > 1 && isdigit(argv[i][j]))
			{
				;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		add = atoi(argv[i]) + atoi(argv[j]);
	}

	printf("%i\n", add);
	return (0);
}

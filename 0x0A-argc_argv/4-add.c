#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that adds positive numbers.
 * @argc: Number of argument
 * @argv: name of array
 * Return: 1 if two integres are passed in arguments
 * Error: If one of the number contains symbols that are not digits
 */

int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

	printf("%d\n", sum);
	}
	return (0);
}

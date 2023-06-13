#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: Arg count
 * @argv: Arg vector
 *
 * Return 0
 */
int main(int argc, char *argv[])
{
	int results = 0, num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		results = num1 * num2;
		printf("%d\n", results);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

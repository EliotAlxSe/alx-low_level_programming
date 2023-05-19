#include <stdio.h>
/**
 * main - Prints all numbers of base 16 in lowercase
 * Return: Always 0
 */
int main(void)
{
	int num;
	char lower;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (lower = 'a'; lower <= 'f'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}

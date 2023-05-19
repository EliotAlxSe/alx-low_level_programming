#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * exept for q and e
 * Return: Always 0
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'a' && lower != 'q')
			putchar(lower);
	}
	putchar('\n');
	return (0);
}

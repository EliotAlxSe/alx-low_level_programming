#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints all possible different combinations of 2 digits
 * Return: Always 0
 */
int main(void)
{
	int num, num2;

	for (num = '0'; num < '9'; num++)
	{
		for (num2 = num + 1; num2 <= '9'; num2++)
		{
			if (num2 != num)
			{
				putchar(num2);
				putchar(num);
				if (num == '8' && num2 == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

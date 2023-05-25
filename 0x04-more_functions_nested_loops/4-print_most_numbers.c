#include "main.h"
/**
 * print_numbers - Prints # from 0 to 9 except 2 and 4
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n == 2 || n == 4)
			continue;
		else
			_putchar(n + '0');
	}
	_putchar('\n');
}

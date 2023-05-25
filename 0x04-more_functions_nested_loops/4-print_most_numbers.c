#include "main.h"
/**
 * print_numbers - Prints # from 0 to 9 except 2 and 4
 */
void print_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch == '2' && ch == '4')
			continue;
		_putchar(ch);
	}
	_putchar('\n');
}

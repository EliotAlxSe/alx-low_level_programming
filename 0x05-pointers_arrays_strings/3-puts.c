#include "main.h"

/**
 * _puts - prints a string
 * @str: A string to be printed
 * Return: void
 */
void _puts(char *str)
{

	if(*str == '\0')
	{
		return;
	}
    
    printf("%c", *str);
    _puts(++str);
}

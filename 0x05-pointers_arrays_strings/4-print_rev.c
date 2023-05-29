#include "main.h"
#include <stdio.h>  
#include <string.h> 
/**
 * print_rev - Prints a string in reverse
 * @s: A string as a charecter pointer
 * Return: void
 */
void print_rev(char *s)
{
	int i, len, n;
	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		n = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = n
	}
}

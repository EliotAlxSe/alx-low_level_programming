#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: Memory area
 * @n: First n bytes
 * @b: constant byte
 *
 * Return:  a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

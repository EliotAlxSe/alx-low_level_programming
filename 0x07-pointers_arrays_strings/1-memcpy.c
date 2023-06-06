#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: Memory area
 * @src: Memory area
 * @n: nth byte
 * Return: a pointer to dest 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

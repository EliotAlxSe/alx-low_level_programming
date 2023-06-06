#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: 1st occurance in the string
 * @accept: String
 *
 * Return: a pointer to the byte in s or NULL
 * if no such bit is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}
	return ('\0');
}	

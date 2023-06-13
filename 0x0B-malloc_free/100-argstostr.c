#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: input Integer
 * @av: Argument vector
 *
 * Return: Pointer String or NULL if it fails
 */
 char *argstostr(int ac, char **av)
{
	char *str;
	int ch = 0, i = 0 ; j = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			ch++;
			j++;
		}
		j = 0;
		i++;
	}
	str = malloc((sizeof(char) * ch) + ac + 1);
	i = 0;

	while (av[i])
	{
		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';
		j = 0;
		k++;
		i++;
	}
	k++;
	str[k] = '\0';
	return (str);
}

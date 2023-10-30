#include "holberton.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to newly allocated memory
* @str: a string given by main
*
* Description: the returned memory allocation has
*	a copy of the string and can be freed
* Return: the pointer or null if string is null
*/

char *_strdup(char *str)
{
	char *p;
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	p = malloc(sizeof(char) * i + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = str[i];
	return (p);
}

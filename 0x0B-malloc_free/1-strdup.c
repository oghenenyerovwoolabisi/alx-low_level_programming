#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ppp;
	int i, r = 0;

	if (str == NULL)
		return (NULL);

	r = 0;
	i = 0;

	while (str[i] != '\0')
	{
		r++;
		i++;
	}
	ppp = malloc(sizeof(char) * (i + 1));

	if (ppp == NULL)
		return (NULL);

	for (i = 0; i < r; i++)
	{
		ppp[i] = str[i];
	}
	return (ppp);
	free(ppp);
}

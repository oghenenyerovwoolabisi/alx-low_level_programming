#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int w = 0;
	int v = 0;

	while (*(src + w) != '\0')
	{
		w++;
	}
	for ( ; v < w; v++)
	{
		dest[v] = src[v];
	}
	dest[w] = '\0';
	return (dest);
}

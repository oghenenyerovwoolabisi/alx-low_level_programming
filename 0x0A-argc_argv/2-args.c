#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints its name.
 * @argc: number of things entered in the command line.
 * @argv: array that holds string value of things
 * entered in command line.
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}

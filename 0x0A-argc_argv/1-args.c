#include <stdlib.h>
#include <stdio.h>

/**
 * main - a function that prints its name.
 * @argc: number of things entered in the command line.
 * @argv: array that holds string value of things
 * entered in command line.
 * Return: 0 Always
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n",argc-1);
                return (0);
}

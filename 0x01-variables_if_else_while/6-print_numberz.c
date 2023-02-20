#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 * Return:0 Always
 */

int main(void)

{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		++num;
	}

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations of
 *  single-digit numbers.
 *  Return: 0 Always
 */

int main(void)

{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + 48);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++num;
	}
	putchar('\n');

	return (0);
}

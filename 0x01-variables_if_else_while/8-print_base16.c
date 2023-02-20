#include <stdio.h>

/**
 * main - This prints 0-9  and then,
 * a-f followed by a new line.
 * Return: (0) Always
 */

int main(void)
{
	char (ch);

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

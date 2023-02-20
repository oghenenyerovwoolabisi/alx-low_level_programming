#include <stdio.h>

/**
 * main - This prints lowercase alphabets and then,
 * upeercase alphabets followed by a new line.
 * Return: (0) Always
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
		putchar('\n');
		return (0);
}

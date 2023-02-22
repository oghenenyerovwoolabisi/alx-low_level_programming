#include "main.h"

/**
 * print_alphabet - Entry point
 * Description - prints all alphabet, in lowercase, followed by a new line
 * Return
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

#include<stdio.h>

/**
 * main - prints single digit numbers in base 10
 * Return: 0 Always
 */

int main(void)
{
	int num;

	for (num = '0'; num < 10; num++)
	{
		printf("%d", num);
	}
		printf('\n');
		return(0);
}

#include <stdio.h>
/**
 * main - Entry point
 * 3-print_alphabets.c
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		putchar(c);
	}
	c = 'A';
	for (; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}

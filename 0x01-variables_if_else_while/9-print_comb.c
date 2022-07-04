#include <stdio.h>
/**
 * main - Entry point
 * 9-print_comb.c
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		putchar(i);
		putchar(' ');
		putchar(',');
	}
	putchar('\n');
	return (0);
}

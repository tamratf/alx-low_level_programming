#include <stdio.h>
/**
 * main - Entry point
 * 101-print_comb4.c
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e = '0';
	int i = '1';
	int j = '2';

	for (; e <= '7'; e++)
	{
		for (; i <= '8'; i++)
		{
			for (; j <= '9'; j++)
			{
				if (e == i || e == j || i == j)
					continue;
				putchar(e);
				putchar(i);
				putchar(j);
				if (e == '7' && i == '8' && j == '9')
					break;
				putchar(',');
				putchar(' ');
			}
			j = i + 1;
		}
		i = e + 1;
	}
	putchar('\n');
	return (0);
}

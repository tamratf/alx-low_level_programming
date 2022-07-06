#include "main.h"
/**
 * times_table - function to print times table
 *
 * 9-times_table.c
 */
void times_table(void)
{
	int c = 0;
	int r = 0;
	int n = 0;
	int u = 0;
	int t = 0;

	while (r < 10)
	{
		while (c < 10)
		{
			n = c * r;
			u = n % 10;
			t = (n - u) / 10;
			if (c > 0)
			{
				_putchar(' ');
				(t <= 0) ? _putchar(' ') : _putchar(t + '0');
			}
			_putchar(u + '0');
			if (c < 9)
				_putchar(44);
			c++;
		}
		c = 0;
		r++;
		_putchar('\n');
	}
}

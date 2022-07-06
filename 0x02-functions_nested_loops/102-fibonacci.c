#include <stdio.h>
/**
 * main - main function
 * 102_fibonacci
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int a = 1;
	long int b = 1;
	long int s;

	printf("%ld", a);
	for (n = 1; n < 50; ++n)
	{
		s = a + b;
		printf(", %ld", s);
		a = b;
		b = s;
	}
	putchar('\n');

	return (0);
}

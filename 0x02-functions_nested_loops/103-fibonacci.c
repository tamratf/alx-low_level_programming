#include <stdio.h>
/**
 * main - main function
 * 103-fibonacci.c
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 1;
	long int n1 = 0;
	long int n2 = 1;
	long int sp2 = 0;
	long int se = 0;
	long int mf = 4000000;

	while (n1 < mf && n2 < mf)
	{
		sp2 = n1 + n2;
		se += (((sp2 % 2) == 0) ? sp2 : 0);
		n1 = n2;
		n2 = sp2;
		i++;
	}

	printf("%ld\n", se);
	return (0);
}

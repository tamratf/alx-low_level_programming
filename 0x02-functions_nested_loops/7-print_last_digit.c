/**
 * print_last_digit - print the last digit
 * @n: input number
 * 7-print_last_digit.c
 * Return: athe last digit
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		_putchar(-d + '0');
		return (-d);
	}
	else
	{
		_putchar(d + '0');
		return (d);
	}
}

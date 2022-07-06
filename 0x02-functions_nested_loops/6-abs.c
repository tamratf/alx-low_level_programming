/**
 * _abs - returns absolute value of an integer
 * @n: input number
 * 6-abs.c
 * Return: absolute value of an integer
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * -1);
	}
}

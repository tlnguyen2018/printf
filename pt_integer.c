#include "holberton.h"
/**
 * pt_integer - function to print integers
 * @list: argument list printed integer
 * Return: Return number of printed integer
 */
int pt_integer(va_list list)
{
	int i, bottom = 1, count = 0;
	unsigned int n;

	i = va_arg(list, int);

	if (i < 0)
	{
		_putchar('-');
		n = i * -1;
		count = count + 1;
	}
	else
	{
		n = a;
	}
	while (n / bottom > 9)
	{
		bottom *= 10;
	}
	while (bottom != 0)
	{
		count = count + _putchar(n / bottom + '0');
		n = n % bottom;
		bottom = bottom / 10;
	}
	return (count);
}

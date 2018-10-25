#include "holberton.h"

void _putchar(char c)
{
	write(1, &c, 1);
}

int p_character(va_list list)
{
	_putchar(va_arg(list, int));
	return(1);
}

int p_persent(void)
{
	_putchar('%');
	return (1);
}

int p_integer(va_list list)
{

	int n;
	n = va_arg(list, int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	if (n > 0)
	{
		_putchar(n / 10);
		_putchar(n % 10);
	}
	return (1);
}

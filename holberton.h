#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <unistd.h>
int _putchar(char c);
int _printf(const char *format, ...);

/**
 *_str - entry point
 *@s: pointer to the string
 *Description: print string with putchar
 */
void _str(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}

/**
 *_intprint - entry point
 *@n: interger
 *Description: print string with putchar
 */
void _intprint(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		_intprint(n / 10);
	_putchar((n % 10) + '0');
}

#endif
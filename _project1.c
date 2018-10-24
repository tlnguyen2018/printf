#include <stdarg.h>
#include "holberton.h"
/**
 *_str - entry point
 *@ptr: pointer to the string
 *Description: print string with putchar
 */
void _str(char *ptr)
{
	if (ptr == NULL)
		return;
	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
	}
}

/**
 *_pr_uint - entry point
 *@uint: unsigned interger
 *Description: print unsigned interger with putchar
 */
void _pr_uint(unsigned int uint)
{
	if (uint / 10 != 0)
		_pr_uint(uint / 10);
	_putchar((uint % 10) + '0');
}

/**
 *pr_int - entry point
 *@in: regular interger
 *Description: print interger with putchar
 */
void pr_int(int in)
{
	if (in < 0)
	{
		_putchar('-');
		in = -in;
	}
	_pr_uint((unsigned int) in);

}

/**
 *_printf - entry point
 *@format: formatted data
 *Description: create printf function for c, s, %
 *Return: 1
 */
int _printf(const char *format, ...)
{
	unsigned int index;
	char letter;
	char *word;
	int number1;
	unsigned int number2;

	va_list list;

	va_start(list, format);

	letter = va_arg(list, int);
	word = va_arg(list, char *);
	number1 = va_arg(list, int);
	number2 = va_arg(list, unsigned int);

	for (index = 0 ; format[index] != '\0' &&
	     format[index] != '%'; index++)
	{
		_putchar(*(format + index++));
		if (format[index] == '\0')
			return (index);
		for (; format[index] != '%'; index++)
			_putchar(*(format + index));
	}
	index++;
	if (*(format + index) == 'c')
	{
		_putchar(letter);
		_putchar('\n');
		return (index);
	}
	if (*(format + index) == 's')
	{
		_str(word);
		_putchar('\n');
		return (index);
	}
	if (*(format + index) == 'd')
	{
		pr_int(number1);
		_putchar('\n');
		return (index);
	}
	if (*(format + index) == 'i')
	{
		_pr_uint(number2);
		_putchar('\n');
		return (index);
	}
	else
		_putchar(format[index++]);
	va_end(list);
	return (0);
}

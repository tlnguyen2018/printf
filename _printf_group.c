#include <stdarg.h>
#include "holberton.h"
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
	int number;

	va_list list;

	va_start(list, format);

	letter = va_arg(list, int);
	word = va_arg(list, char *);
	number = va_arg(list, int);

	for (index = 0 ; format[index] != 0; index++)
	{
		while (format[index] != '%')
			_putchar(format[index++]);
		index++;
		if (format[index] == 'c')
		{
			_putchar(letter);
			_putchar('\n');
			break;
		}
		if (format[index] == 's')
		{
			_str(word);
			_putchar('\n');
			break;
		}
		if (format[index] == 'd' || format[index] == 'i')
		{
			_intprint(number);
			_putchar('\n');
			break;
		}
		else
			_putchar(format[index++]);
	}
	if (format[index] == '\0')
		_putchar('\n');
	va_end(list);
	return (0);
}

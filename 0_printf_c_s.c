#include "holberton.h"
#include <stdarg.h>
/**
 *ptcharstring - entry point
 *@s: pointer to the string
 *Description: print string with putchar
 */
void ptcharstring(char *s)
{
	if (s == NULL)
		return;
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}

/**
 *_printf - entry point
 *@format: formatted data
 *Description: create printf function for c, s, %
 *Return: 1
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	char letter;
	char *word;

	va_list list;

	va_start(list, format);

	letter = va_arg(list, int);
	word = va_arg(list, char *);

	for (i = 0 ; format[i] != 0; i++)
	{
		while (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
		}
		i++;
		if (format[i] == 'c')
		{
			_putchar(letter);
			break;
		}
		if (format[i] == 's')
		{
			ptcharstring(word);
			break;
		}
	}
	va_end(list);
	_putchar('\n');
	return (0);
}


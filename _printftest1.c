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


	va_list list;

	va_start(list, format);

	for (index = 0 ; format[index] != '\0'; index++)
	{
		if (format[index] == '%')
		{
			index++;
			if (format[index] == 'c')
				p_putchar(list);
			else if (format[index] == 's')
				p_str(list);
			xxxxxxx
	}
		else
			_putchar(format[index]);
	}
	return (index);

}

#include "holberton.h"

int _printf(const char *format, ...)
{

/*	char c; */
	va_list list;
	int index, bytes, n = 0;

	special symb[] = {
/*	       	{"%", &p_persent}, */
		{"c", &p_character},
		{"i", &p_integer},
/*		{"d", p_decimal},
		{"s", p_string}, */
		{NULL, NULL}
	};

	va_start(list, format);
	if (format == NULL)
		return (-12);

	for (index = 0; format[index]; index++) /* goes through a string*/
	{

		while (format[index] != '%' && format[index])
		{
		_putchar(format[index]);
		bytes++;
		index++;
		}

		while (symb[n].type)
			{

				if (format[index] == *(symb[n].type))
				{
				bytes = bytes + (symb[n].handler(list));
				break;

				}
				n++;
			}

	}
	va_end(list);
	return (bytes);
}

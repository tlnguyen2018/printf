#include "holberton.h"

/**
 * pt_check - function that check in which what specifier/ or not to print
 * @format: formatted string
 * @print_out: array of struct check
 * @list: list of arguments to print
 * Return: counted of printed items
 */
int pt_check(const char *format, struct_type *print_out, va_list list)
{
	char s;
	int count = 0, i = 0, j = 0;

	s = format[i];
	while (s != '\0')
	{
		if (s == '%')
		{
			j = 0;
			i++;
			s = format[i];
			while (print_out[j].print_type != NULL &&
			       s != *(print_out[j].print_type))
				j++;
			if (print_out[j].print_type != NULL)
				count = count + print_out[j].f(list);
			else
			{
				if (s == '\0')
					return (0);
				if (s != '%')
					count += _putchar('%');
				count += _putchar(s);
			}
		}
		else
			count += _putchar(s);
		i++;
		s = format[i];
	}
	return (count);
}

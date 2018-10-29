#include "holberton.h"

/**
 * _printf - created printf function according to specifier
 * @format: formatted string
 * struct_type ops - struct include specifier and function
 * Description : ops
 * Return: length of printed string
 */
int _printf(const char *format, ...)
{
	struct_type ops[] = {
		{"c", pt_char},
		{"s", pt_str},
		{"d", pt_integer},
		{"i", pt_integer},
		{NULL, NULL}
	};

	va_list list;
	int i;

	if (format == NULL)
	{
		return (0);
	}
	va_start(list, format);
	i = pt_check(format, ops, list);
	va_end(list);
	return (i);
}

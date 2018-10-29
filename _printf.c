/**
 * _printf - created printf function according to specifier
 * @format: formatted string
 * Return: length of printed string
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;

	struct_type ops[] = {
		{"c", pt_char},
		{"s", pt_str},
		{"d", pt_integer},
		{"i", pt_integer},
		{NULL, NULL}
	};
	if (format == NULL)
	{
		return (0);
	}
	va_start(list, format);
	i = pt_check(format, ops, list);
	va_end(list);
	return (i);
}

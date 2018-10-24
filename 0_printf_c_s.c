#include "holberton.h"
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

	va_list list;
	char buffer[1024];
	 [] = {{"c", },
				      {"s", },
				      {"i", },
				      {"d", },
	letter = va_arg(list, int);
	word = va_arg(list, char *);

		if (format == NULL)
			return (-1);
			while (format[i] != '0')
		{
			if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
		}
		i++;
		if (format[i] == 'c')
		{
			break;
		}
		if (format[i] == 's')
		{
			write(1, &format[i], 1);
			break;
		}
	}
	va_end(list);
	return (0);
}

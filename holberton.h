#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct symbols
{
	char *type;
	int (*handler)(va_list);
} special;

int p_integer(va_list list);
int _printf(const char *format, ...);
void _putchar(char);
int _intprint(va_list list);
void _str(va_list list);
void _putchar(char c);
int p_character(va_list list);
int p_persent(void);

#endif

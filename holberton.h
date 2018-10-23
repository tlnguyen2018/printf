#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
/**
 * struct convert_these - for converting formats structs
 * @spec: The conversion specifier
 * @func_pt: Function pointer
 */

typedef struct conversion_specification
{
	char *opt;
	int * (*func_pt)(va_list, int *);

} convt;

int *print_char(va_list args, int *sum);
int *print_str(va_list args, int *sum);
int *print_dec(va_list args, int *sum);
int *print_int(va_list args, int *sum);
#endif


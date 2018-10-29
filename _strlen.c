#include "holberton.h"

/**
 *_strlen - entry point
 *@s: value of s
 *Description: length of string
 *Return: length of string
 */

int _strlen(char *s)

{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

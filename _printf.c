#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Function that produces output according to a format.
 * @format: Pointer
 * Return: Always 0
 */
int _printf(const char *format, ...)
{

	va_list print;
	unsigned int i, j;
	char *separator = "";

	MyPrint ops[] = {
		{"c", op_character},
		{"s", op_string},
		{"i", op_integer},
		{"d", op_decimal},
	};
}

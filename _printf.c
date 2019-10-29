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
	int count = 0;

	MyPrint ops[] = {
		{"c", op_character},
		{"s", op_string},
		{"i", op_integer},
		{"d", op_integer},
	};
	va_start(print, format);
	i = 0;
	if (format == NULL)
		return (-1);
	while (format && format[i])
	{
		j = 0;
		if (format[i] == '%' && format[i + 1] != '%')
		{
			while (j < 4)
			{
				if (ops[j].op[0] == format[i + 1])
				{
					count += ops[j].f(print);
					i++;
					break;
				} j++;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			count += _putchar('%');
			i++;
		}
		else
		{
			count += _putchar(format[i]);
		} i++;
	} va_end(print);
	return (count);
}

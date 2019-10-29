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
	int count = 1;

	MyPrint ops[] = {
		{"c", op_character},
		{"s", op_string},
		{"i", op_integer},
		{"d", op_decimal},
	}

	va_start(print, format);
	i = 0;
	if (format == NULL)
	{
		return (-1);
	}
	while (format && format[i])
       	{
		j = 0;
		while (j < 4)
		{
			if (ops[j].op[0] == format[i])
			{
				ops[j].f(print);
				break;
			}
			j++;
		}
		i++;
		count += 1;
	}
	write(1,"\n",1);
	va_end(all);
	return (count);
}

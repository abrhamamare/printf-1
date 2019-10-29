#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * _putchar - print given character
 * @c: character to print
 * Return: output
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * op_c - print a single character
 * @al: argument list
 * Return: Write
 */
int op_c(va_list al)
{
	char item[1];
	char auxitem;

	auxitem = va_arg(al, int);
	item[0] = auxitem;
	_putchar(item[0]);
	return (1);
}
/**
 * op_s - print a string of characters
 * @al: argument list
 * Return: Write
 */
int op_s(va_list al)
{
	char *item = va_arg(al, char *);
	int lenght = 0;

	while (item[lenght])
	{
		lenght += _putchar(item[lenght]);
	}
	return (lenght);
}
/**
 * op_d - print a decimal (base 10) number
 * @al: argument list
 * Return: Write
 */
int op_d(va_list al)
{
	int item;
	int div = 1;
	int lenght = 0;
	unsigned int num;

	item = va_arg(al, int);
	if (item < 0)
	{
		lenght += _putchar('-');
		num = item * -1;
	}
	else
	{
		num = item;
	}
	while (num / div > 9)
	{
		div *= 10;
	}
	while (div != 0)
	{
		lenght += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (lenght);
}
/**
 * _printf - Function that produces output according to a format.
 * @format: Is a character string.
 * The format string is composed of zero or more directives.
 * Returns: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	op_t opl[] = {
		{"c", op_c},
		{"s", op_s},
		{"d", op_d},
		{"i", op_d}
	};
	va_list al;
	int x;
	int y;
	int lenght = 0;

	va_start(al, format);
	x = 0;
	while (format[x])
	{
		if (format[x] == '%')
		{
			y = 0;
			while (y < 4)
			{
				if (opl[y].op[0] == format[x + 1])
				{
					lenght += opl[y].func(al);
					x++;
				}
				y++;
			}
		}
		else
		{
			lenght += _putchar(format[x]);
		}
		x++;
	}
	va_end(al);
	return (lenght);
}

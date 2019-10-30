#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _putchar - print given character
 * @c: character to print
 * Return: Write
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * op_c - print a single character
 * @al: argument list
 * Return: Always lenght
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
 * Return: Always lenght
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
 * Return: Always lenght
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
 * op_u - print an unsigned decimal (base 10) number
 * @al: argument list
 * Return: Always lenght
 */
int op_u(va_list al)
{}
/**
 * op_o - print a number in octal (base 8)
 * @al: argument list
 * Return: Always lenght
 */
int op_o(va_list al)
{}
/**
 * op_x - Unsigned hexadecima lowercase
 * @al: argument list
 * Return: Always lenght
 */
int op_x(va_list al)
{}
/**
 * op_X - Unsigned hexadecima uppercase
 * @al: argument list
 * Return: Always lenght
 */
int op_X(va_list al)
{}
/**
 * op_p - Address
 * @al: argument list
 * Return: Always lenght
 */
int op_p(va_list al)
{}
/**
 * op_r - Unknown
 * @al: argument list
 * Return: Always lenght
 */
int op_r(va_list al)
{}
/**
 * op_percent - Percent
 * @al: argument list
 * Return: Always lenght
 */
int op_percent(va_list al)
{}

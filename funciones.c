#include <stdio.h>
#include "holberton.h"
#include <stdarg.h>


/**
 * _putchar - prints given character
 * @c: character to print
 *
 * Return: number of characters printed, -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * op_string - Print Integer
 * @form: name va_list
 *
 * Return: Nothing.
 */

int op_string(va_list form)
{
	int lenght;
	char *str = va_arg(form, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	lenght = 0;
	while (str[lenght])
	{
		lenght += _putchar(str[lenght]);
	}
	return (lenght);
}
/**
 * op_character - print character
 * @form: name of va_list
 *
 * Return: Nothing.
 */

int op_character(va_list form)
{
	int lenght;

	lenght += _putchar(va_arg(form, int));
	return (lenght);
}


/**
 * op_integer - print integer numbers
 * @form: name of va_list
 *
 * Return: Nothing.
 */

int op_integer(va_list form)
{
	int integer = va_arg(form, int);
	int div = 1;
	int lenght = 0;
	unsigned int number;

	if (integer < 0)
	{
		lenght += _putchar('-');
		number = integer * -1;
	}
	else
		number = integer;

	while (number / div > 9)
		div *= 10;

	while (div != 0)
	{
		lenght += _putchar('0' + number / div);
		number %= div;
		div /= 10;
	}

	return (lenght);
}

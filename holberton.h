#ifndef PRINTF_H
#define PRINTF_H

int _printf(const char *format, ...);
/**
 * struct format - Data type of a format.
 * @op: Format.
 * @f: Function.
 *
 */

typedef struct format
{
	char *op;
	void (*f)(va_list all);
} MyPrint;

#endif

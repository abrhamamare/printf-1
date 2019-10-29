#ifndef HOLBERTON_H
#define HOLBERTON_H
int _putchar(char c);
int op_c(va_list al);
int op_s(va_list al);
int op_d(va_list al);
int _printf(const char *format, ...);
/**
 * struct op - Struct
 * @op: input
 * @func: function
 */
typedef struct op
{
	char *op;
	int (*func)(va_list al);
} op_t;
#endif

#ifndef HOLBERTON_H
#define HOLBERTON_H
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

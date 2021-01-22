#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>

int _printf(const char *format, ...);
int (*get_ops_function(char s))(va_list arg_list);
int print_char(va_list arg_list);
int print_string(va_list arg_list);
int print_unknow_type(va_list arg_list);
int print_percent(va_list arg_list);

/**
 * struct data - contains data in two columns
 * @type: data type
 * @f: function type
 *
 * Description: contains data in two columns
 */
typedef struct print_f
{
	char *type;
	int (*f)(va_list arg_list);
} _print_f;
#endif /* _PRINTF_H */

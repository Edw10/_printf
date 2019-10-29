#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <stdarg.h>

int _putchar(int c);
int _printf(const char *format, ...);
int (*get_ops_function(char s))(va_list ap);
int prt_chr(va_list ap);
int prt_str(va_list ap);
int prt_pct(va_list ap);
int prt_ukn(va_list ap);
int prt_nil(va_list ap);

/**
 * struct data - contains data in two columns
 * @type: data type
 * @f: function type
 *
 * Description: contains data in two columns
 */
typedef struct data
{
	char *type;
	int (*f)(va_list ap);
} d_dt;
#endif /* _HOLBERTON_H_ */

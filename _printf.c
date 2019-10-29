#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

int _printf(const char *format, ...)
{
    int i = 0, byte = 0;
    int (*execute)(va_list ap);
    va_list ap;

    va_start(ap, format);

    while (format[i])
    {
       if (format[i] == '%')
       {
	       while (format[i + 1] == ' ' || format[i + 1] == 9)
		       i++;

	       execute = get_ops_function(format[i + 1]);
	       byte = byte + execute(ap);
	       i++;
       }
       else
       {
	       write(1, &format[i], 1);
	       byte = byte + 1;
       }

       i++;
    }
    va_end(ap);
    return(byte);
}

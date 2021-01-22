#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - print a formatted text
 * @format: str with the text and format
 * Return: the number of bytes that print
*/

int _printf(const char *format, ...)
{
	va_list arg_list;
	unsigned int i = 0;
	int bytes = 0;
	int (*execute_func)(va_list arg_list);

	if (!format)
		return (-1);

	va_start(arg_list, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			while (format[i + 1] == 32 || format[i + 1] == 9)
				i++;

			if (format[i + 1])
			{
				execute_func = get_ops_function(format[i + 1]);
				bytes += execute_func(arg_list);
				i++;
			}
			else
				return (bytes);
		}
		else
		{
			write(1, &format[i], 1);
			bytes += 1;
		}
		i++;
	}
	va_end(arg_list);
	return (bytes);
}

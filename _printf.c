<<<<<<< HEAD
#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"
#include <unistd.h>

/**
 * _printf - print a formatted text
 * @format: str with the text and format
 * Return: the number of bytes that print
 */

int _printf(const char *format, ...)
{
	int i = 0, byte = 0;
	int (*execute)(va_list ap);
	va_list ap;

	va_start(ap, format);

	if (!format)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			while (format[i + 1] == ' ' || format[i + 1] == 9)
				i++;
			if (format[i + 1])
			{
				execute = get_ops_function(format[i + 1]);
				byte = byte + execute(ap);
				i++;
			}
			else
			{
				return (-1);
			}
		}
		else
		{
			write(1, &format[i], 1);
			byte = byte + 1;
		}

		i++;
	}
	va_end(ap);
	return (byte);
}
=======
>>>>>>> 16fa8143ff3574ddeced3caed33588f1a9ec1279

#include "holberton.h"
#include <unistd.h>

/**
 * print_char - print  character
 * @arg_list: list of characts
 *
 * Return: nmber of bytes
 */
int print_char(va_list arg_list)
{
	char value;

	value = va_arg(arg_list, int);
	write(1, &value, 1);
	return (1);
}

/**
 * print_string - prints a string
 * @arg_list: string char by char
 *
 * Return: bytes total
 */
int print_string(va_list arg_list)
{
	char *value;
	int i = 0, bytes = 0;

	value = va_arg(arg_list, char *);

	if (value)
	{
		while (value[i])
		{
			write(1, &value[i], 1);
			bytes += 1;
			i++;
		}

	}
	else
	{
		write(1, "(null)", 6);
		bytes = 6;
	}
	return (bytes);
}

/**
 * print_unknow_type - prints an unnonewd type
 * @arg_list: string char by char
 *
 * Return: bytes total
 */
int print_unknow_type(va_list arg_list)
{
	int bytes = 2;

	(void) arg_list;
	return (bytes);
}

/**
 * print_percent - prints a % sign
 * @arg_list: string char by char
 *
 * Return: bytes total
 */
int print_percent(va_list arg_list)
{

	(void) arg_list;

	write(1, "%", 1);
	return (1);

}

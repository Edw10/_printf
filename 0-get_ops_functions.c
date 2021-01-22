#include "holberton.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * get_ops_function - select the format
 * @s: char to switch
 * Return: a pointer to the function
 */

int (*get_ops_function(char s))(va_list arg_list)
{
	int i = 0;
	_print_f types[] = {
		{"c", print_char},
		{"s", print_string,},
		{"%", print_percent}
	};

	for (i = 0; i < 3; i++)
	{
		if (*types[i].type == s)
			return (types[i].f);
	}

	write(1, "%", 1);
	write(1, &s, 1);
	return (print_unknow_type);
}

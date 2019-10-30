#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * get_ops_function - function pointer that return a funcion ops
 * @s: pointer to char
 *
 * Return: function pointer
 */

int (*get_ops_function(char s))(va_list ap)
{
	int i = 0;

	d_dt data_types[] = {
		{"c", prt_chr},
		{"s", prt_str},
		{"%", prt_pct},
		{"d", prt_int},
		{"i", prt_int}
	};

	while (i < 5)
	{
		if (s == *data_types[i].type)
			return (data_types[i].f);
		i++;
	}
	write(1, "%", 1);
	write(1, &s, 1);
	return (prt_ukn);
}

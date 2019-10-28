#include "holberton.h"
#include <stdio.h>

int prt_str(va_list ap)
{
	char *p;
	int byte = 0;

	p = va_arg(ap, char *);
	while (p)
	{
		write(1, &p, 1);
		p++;
		byte++;
	}
	return (byte);
}

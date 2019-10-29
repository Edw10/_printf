#include "holberton.h"
#include <stdio.h>

int prt_chr(va_list ap)
{
	char p;
	int byte = 0;

	p = (char) va_arg(ap, int);

	if (p)
	{
		write(1, &p, 1);
		byte++;
	}
	return (byte);
}

int prt_str(va_list ap)
{
	char *p;
	int byte = 0;

	p = va_arg(ap, char *);

	while (*p)
	{
		write(1, &p, 1);
		p++;
		byte++;
	}
	return (byte);
}

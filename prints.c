#include "holberton.h"
#include <stdio.h>
#include <unistd.h>

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
		write(1, p, 1);
		p++;
		byte++;
	}
	return (byte);
}

int prt_pct(va_list ap)
{
	int byte = 0;

	write(1, "%", 1);
	byte++;
	(void) ap;

	return (byte);
}

p#include "holberton.h"
#include <stdio.h>
#include <unistd.h>

/**
 * prt_chr - print  character
 * @ap: list of characts
 *
 * Return: nmber of bytes
 */
int _printd(int p);

int prt_int(va_list ap)
{
	int p;
	int byte = 0;

	p = va_arg(ap, int);

	if (p < 0)
	{
		write(1, "-", 1);
		byte++;
	}
	byte = byte + _printd(p);

	return (byte);
}

int _printd(int p)
{
	int a = 48, byte = 0;

	if (p / 10 == 0)
	{
		a = p + a;
		write(1 , &a, 1);
		return (1);
	}

	byte = 1 + _printd(p / 10);
	a = (p % 10) + a;
	write(1, &a, 1);
	return (byte);
}

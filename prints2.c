#include "holberton.h"
#include <stdio.h>
#include <unistd.h>

/**
 * prt_int - print character
 * @ap: list of characts
 *
 * Return: nmber of bytes
 */

int prt_int(va_list ap)
{
	int p;
	int byte = 0;

	p = va_arg(ap, int);

	if (p < 0)
	{
		write(1, "-", 1);
		p = -p;
		byte++;
	}
	byte = byte + _printd(p);

	return (byte);
}

/**
 * _printd - print  character
 * @p: list of characts
 *
 * Return: nmber of bytes
 */


int _printd(unsigned int p)
{
	int a = 48, byte = 0;

	if (p / 10 == 0)
	{
		a = p + a;
		write(1, &a, 1);
		return (1);
	}

	byte = 1 + _printd(p / 10);
	a = (p % 10) + a;
	write(1, &a, 1);
	return (byte);
}

/**
 * prt_bin - print character
 * @ap: list of characts
 *
 * Return: nmber of bytes
 */


int prt_bin(va_list ap)
{
	unsigned int p;
	int byte = 0;
	int a = 0;

	p = va_arg(ap, size_t);
	if (!p)
		byte++;

	while (p)
	{
		a = (p % 2) + 48;
		write(1, &a, 1);
		byte++;
		p = p / 2;
	}
	return (byte);
}

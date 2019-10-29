#include "holberton.h"
#include <stdio.h>
#include <unistd.h>

/**
 * prt_chr - print  character
 * @ap: list of characts
 *
 * Return: nmber of bytes
 */
int prt_chr(va_list ap)
{
	char p;
	int byte = 1;

	p = (char) va_arg(ap, int);

	if (p)
	{
		write(1, &p, 1);
	}
	else if (p == '\0')
	{
		write(1, "\0", 1);

	}
	return (byte);
}

/**
 * prt_str - prints a string
 * @ap: string char by char
 *
 * Return: bytes total
 */
int prt_str(va_list ap)
{
	char *p;
	int byte = 0, e = 0;

	p = va_arg(ap, char *);

	if (p)
	{
		while (*(p + e))
		{
			write(1, p + e, 1);
			e++;
			byte++;
		}
	}
	else
	{
		write(1, "(null)", 6);
		byte = 6;
	}

	return (byte);
}

/**
 * prt_pct - prints a % sign
 * @ap: string char by char
 *
 * Return: bytes total
 */
int prt_pct(va_list ap)
{

	int byte = 0;

	write(1, "%", 1);
	byte++;
	(void) ap;
	return (byte);
}

/**
 * prt_ukn - prints an unnonewd type
 * @ap: string char by char
 *
 * Return: bytes total
 */
int prt_ukn(va_list ap)
{
	int byte = 2;
	(void) ap;
	return (byte);
}

/**
 * prt_nil - prints a null message
 * @ap: string char by char
 *
 * Return: bytes total
 */
int prt_nil(va_list ap)
{
	int byte = 6;
	(void) ap;
	write(1, "(null)", 6);
	return (byte);
}

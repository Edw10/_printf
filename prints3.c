#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

int prt_bin(va_list ap)
{
	int byte = 0;
	int a[20];
	long int  p;
	int i = 0, j = 0;
	
	p = va_arg(ap, size_t);

	while (p > 0)
	{
		a[i] = (p % 2) + 48;
		p = p / 2;
		byte++;
		i++;
	} 
	for (j = i - 1; j >= 0; j--)
	{
		write(1, &a[j], 1);	
	}

	return (byte);
}



#include "holberton.h"
#include <stdio.h>

int main()
{
	char c = 'a';
	char *s = "to";
	int p = 0;

	_printf("hola jose %%%c como estas, %s \n", c, s);
	p = _printf("hola jose %%s como estas, %c \n", c);
	printf("%d\n", p);

}

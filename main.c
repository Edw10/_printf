#include "holberton.h"
#include <stdio.h>

int main()
{
	char c = 'c';
	char *s = "to";
	int p = 0;

	_printf("hola jose %r como estas, %s \n", c, s);
	p = printf("hola jose %s como estas, %c \n", s, c);
	printf("%d\n", p);

}

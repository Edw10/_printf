#include "holberton.h"
#include <stdio.h>

int main()
{
	char c = 'a';
	char *s = "to";
	int p = 0, q = 0;

	printf("hola jose %%%c como estas, %s \n", c, s);
	p = _printf("hola jose %%to como estas, %c \n", c);
	printf("%d\n", p);
	q = printf("hola jose %%to como estas, %c \n", c);
	printf("%d\n", q);

}

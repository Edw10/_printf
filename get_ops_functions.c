/* include header */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

int (*get_ops_function(char s))(va_list ap)
{
    int i = 0;

    d_dt data_types[] = {
        {"c", prt_chr},
        {"s", prt_str},
	{"%", prt_pct}
    };

    while (i < 3)
    {
        if (s == *data_types[i].type)
           return (data_types[i].f);
       i++;
    }
    write(1, "%", 1);
    write(1, &s, 1);
    return (prt_ukn);
}

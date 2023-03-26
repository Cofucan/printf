#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - produces output according to a specified format
 * @format: Formatted string to be printed
 *
 * Return: The number of bytes printed to stdout
 */

int _printf(const char *format, ...)
{
	va_list args;
	int u, d_type, bytes = 0;
	char c_type, *s_type;
	double f_type;

	va_start(args, format);
	for (u = 0; *(format + u); u++)
	{
		if (*(format + u) != '%')
		{
			bytes += _putchar(*(format + u));
			continue;
		}
		u++;
		switch (*(format + u))
		{
			case 'c':
				c_type = (char)va_arg(args, int);
				bytes += _putchar(c_type);
				break;
			case 'd':
				d_type = va_arg(args, int);
				bytes += print_int(d_type);
				break;
			case 'i':
				d_type = va_arg(args, int);
				bytes += print_int(d_type);
				break;
			case 's':
				s_type = va_arg(args, char *);
				bytes += print_str(s_type);
				break;
			case 'f':
				f_type = (float)va_arg(args, double);
				bytes += print_float(f_type);
				break;
		}
	}
	va_end(args);
	return (bytes);
}

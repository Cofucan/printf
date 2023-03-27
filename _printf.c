#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int print_format(char specifier, va_list args);

/**
 * _printf - produces output according to a specified format
 * @format: Formatted string to be printed
 *
 * Return: The number of bytes printed to stdout
 */

int _printf(const char *format, ...)
{
	va_list args;
	int u, bytes = 0;

	va_start(args, format);
	for (u = 0; *(format + u); u++)
	{
		if (*(format + u) != '%')
		{
			bytes += _putchar(*(format + u));
			continue;
		}
		u++;
		bytes += print_format(*(format + u), args);
	}
	va_end(args);
	return (bytes);
}

/**
 * print_format - prints the data specified by a format
 * @specifier: Format to print the data with
 * @args: Arguments to be printed accouding to the specifiers
 *
 * Return: The number of bytes printed to stdout
 */

int print_format(char specifier, va_list args)
{
	int d_type, bytes = 0;
	char c_type, *s_type;
	double f_type;

	switch (specifier)
	{
		case '%':
			bytes += _putchar('%');
			break;
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
	return (bytes);
}

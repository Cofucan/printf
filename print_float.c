#include "main.h"
#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_float - prints the digits of a float to stdout
 * @num: Number to be printed
 *
 * Return: The number of bytes printed to stdout
 */

int print_float(float num)
{
	char sign = '-';
	char dot = '.';
	int bytes = 0;
	char digit;
	int integer_part;
	float fractional_part;

	if (num < 0)
	{
		bytes += write(1, &sign, sizeof(char));
		num = -num;
	}

	integer_part = (int)num;
	fractional_part = num - integer_part;

	/* Print integer part and count bytes printed */
	bytes += print_int(integer_part);

	/* Print the dot sign between the integer and fractional parts */
	bytes += write(1, &dot, sizeof(char));

	/* Print fractional part and count the bytes printed */
	while (fractional_part)
	{
		fractional_part *= 10;
		digit = (int)fractional_part + '0';
		bytes += write(1, &digit, sizeof(char));
		fractional_part -= digit;
	}

	return (bytes);
}

#include "main.h"
#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_int - prints the digits of an integer to stdout
 * @num: Number to be printed
 *
 * Return: The number of bytes printed to stdout
 */

int print_int(int num)
{
	char digit = '0';
	char sign = '-';
	int bytes = 0;
	int num_len;
	int pow, remainder;

	if (num < 0)
	{
		bytes += write(1, &sign, sizeof(char));
		num = -num;
	}
	if (num == 0)
	{
		bytes += write(1, &digit, sizeof(char));
		return (bytes);
	}

	num_len = number_of_digits(num);
	remainder = num;
	while (num_len)
	{
		pow = power(10, num_len - 1);
		digit = (remainder / pow) + '0';
		bytes += write(1, &digit, sizeof(char));
		remainder %= pow;
		num_len--;
	}

	return (bytes);
}

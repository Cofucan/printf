#include "main.h"
#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>

int print_int(int num)
{
	char digit;
	char sign = '-';
	int bytes = 0;
	int num_len;
	int pow, remainder;

	if (num < 0)
	{
		bytes += write(1, &sign, sizeof(char));
		num = -num;
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


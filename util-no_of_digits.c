#include "main.h"
#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * number_of_digits - returns the number of digits in an integer
 * @num: The number to be processed
 *
 * Return: The number of digits in that number.
 */

int number_of_digits(int num)
{
	int x = num;
	int len = 0;

	while (x)
	{
		x /= 10;
		len++;
	}

	return (len);
}

#include "main.h"
#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>

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

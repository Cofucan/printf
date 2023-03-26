#include "main.h"
#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>

int print_str(char *str)
{
	int bytes = 0;

	while (*str)
	{
		bytes += _putchar(*str);
		str++;
	}
	return (bytes);
}

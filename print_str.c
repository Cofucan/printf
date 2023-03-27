#include "main.h"
#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_str - prints the characters of a string/array to stdout
 * @str: String/array to be printed
 *
 * Return: The number of bytes printed to stdout
 */

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

#include "main.h"
#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * power - returns a number raised to a the power of another number
 * @num: The number to be raised
 * @pow: The power to raise the number to
 *
 * Return: The number raised.
 */

int power(int num, int pow)
{
	int x;
	int raised = 1;

	if (pow == 0)
		return (1);

	for (x = 0; x < pow; x++)
		raised *= num;

	return (raised);
}

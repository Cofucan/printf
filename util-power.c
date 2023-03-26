#include "main.h"
#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>

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

#include "main.h"

int printBinary(unsigned int num, int *count)
{

	char buffer[33];
	int i = 32;

	if (num == 0)
	{
		_putchar('0');
		(*count)++;
		return (NULL);
	}

	buffer[i--] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num & 1) ? '1' : '0';
		num >>= 1;
	}

	return (buffer + i + 1, count);
}


#include <stdlib.h>
#include "main.h"

/**
 * printBinary - Converts and integer to binary
 * @dec: Int to be converted
 * @count: To update the coubnt
 */
void printBinary(int dec, int *count)
{
	char binary_str[32];
	int index = 0, i;

	if (dec == 0)
	{
		_putchar('0');
		(*count)++;
		return;
	}

	while (dec > 0)
	{
		binary_str[index++] = (dec % 2) + '0';
		dec = dec / 2;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(binary_str[i]);
		(*count)++;
	}
}

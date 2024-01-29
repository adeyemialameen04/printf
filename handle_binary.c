#include "main.h"

/**
 * printBinary - Converts an integer to binary with leading zeros.
 * @dec: Integer to be converted.
 * @count: Pointer to the count variable.
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

	for (i = 31; i >= 0; i--)
	{
		binary_str[i] = (dec % 2) + '0';
		dec /= 2;
	}

	for (i = 0; i < 32; i++)
	{
		if (binary_str[i] == '1')
		{
			index = i;
			break;
		}
	}

	for (i = index; i < 32; i++)
	{
		_putchar(binary_str[i]);
		(*count)++;
	}
}

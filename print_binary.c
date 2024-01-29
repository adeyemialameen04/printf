
#include "main.h"
#include "print.h"

/**
 * printBinary - Converts and prints and  integer to binary
 * @num: Int to be converted
 * @count: Counter variable.
 */
void printBinary(unsigned int num, int *count)
{
	char buffer[33];
	int i = 32;

	if (num == 0)
	{
		printChar('0');
		(*count)++;
		return;
	}

	buffer[i--] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num & 1) ? '1' : '0';
		num >>= 1;
	}

	printStr(buffer + i + 1, count);
}

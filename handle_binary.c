#include "main.h"

void printBinary(int dec, int *count)
{
	int binary_num = 0, i = 1, remainder;

	while (dec != 0)
	{
		remainder = dec % 2;
		dec /= 2;
		binary_num += remainder * i;
		i *= 10;
	}

	printInt(binary_num, count);
}
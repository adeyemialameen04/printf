#include "main.h"

/**
 * convertToBinary - Converts and integer to binary
 * @dec: Int to be converted
 * Return: Return the converted binary.
 */
int convertToBinary(unsigned int dec)
{
	int binary_num = 0, i = 1, remainder;

	while (dec != 0)
	{
		remainder = dec % 2;
		dec /= 2;
		binary_num += remainder * i;
		i *= 10;
	}

	return (binary_num);
}

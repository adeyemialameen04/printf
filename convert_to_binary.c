#include "main.h"
#include <stdlib.h>

/**
 * convertToBinary - Converts and integer to binary
 * @dec: Int to be converted
 * Return: Return the converted binary.
 */
BinaryResult convertToBinary(unsigned int dec)
{
	char *binary_num = malloc(33);
	int i;
	int start = 0;
	BinaryResult result;

	if (binary_num == NULL)
	{
		result.binary = NULL;
		result.start = 0;
		return (result);
	}

	for (i = 0; i < 32; i++)
		binary_num[i] = '0';

	binary_num[32] = '\0';

	for (i = 31; dec > 0; i--)
	{
		binary_num[i] = (dec % 2) + '0';
		dec /= 2;
		start = i;
	}

	result.binary = binary_num + start;
	result.start = start;
	return (result);
}

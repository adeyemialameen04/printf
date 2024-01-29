#include <stdlib.h>

/**
 * convertToBinary - Converts and integer to binary
 * @dec: Int to be converted
 * Return - Binary
 */
char *convertToBinary(unsigned int dec)
{
	char *binary_num = malloc(33);
	int i;

	if (binary_num == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < 32; i++)
	{
		binary_num[i] = '0';
	}

	binary_num[32] = '\0';

	for (i = 31; dec > 0; i--)
	{
		binary_num[i] = (dec % 2) + '0';
		dec /= 2;
	}

	return (binary_num);
}

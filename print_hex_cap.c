#include "print.h"
#include "main.h"

/**
 * printHexCap - Print an int
 * @dec: Int number to be printed
 * @count: Pointer to count variable
 */
void printHexCap(int dec, int *count)
{
	char hexa_dec[100];
	int i = 0, j;
	unsigned int u_dec = (unsigned int)dec;

	while (u_dec != 0)
	{
		int temp = 0;

		temp = u_dec % 16;

		if (temp < 10)
		{
			hexa_dec[i] = temp + '0';
			i++;
		}
		else
		{
			hexa_dec[i] = temp - 10 + 'A';
			i++;
		}

		u_dec = u_dec / 16;
	}

	if (i == 0)
	{
		hexa_dec[i++] = '0';
	}

	for (j = i - 1; j >= 0; j--)
	{
		printChar(hexa_dec[j]);
		(*count)++;
	}
}

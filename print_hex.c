#include "print.h"
#include "main.h"

/**
 * printHex - Print an int
 * @dec: Int number to be printed
 * @count: Pointer to count variable
 */
void printHex(int dec, int *count)
{
	char hexa_dec[100];
	int i = 0, j;

	while (dec != 0)
	{
		int temp = 0;

		temp = dec % 16;

		if (temp < 10)
		{
			hexa_dec[i] = temp + '0';
			i++;
		}
		else
		{
			hexa_dec[i] = temp - 10 + 'a';
			i++;
		}

		dec = dec / 16;
	}

	for (j = i - 1; j >= 0; j--)
	{
		printChar(hexa_dec[j]);
		(*count)++;
	}
}

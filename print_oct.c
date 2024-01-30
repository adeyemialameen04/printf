#include "main.h"
#include "print.h"

/**
 * printOct - Print an int
 * @dec: Int number to be printed
 * @count: Pointer to count variable
 */
void printOct(int dec, int *count)
{
	char oct_dec[100];
	int i = 0, j;
	unsigned int u_dec = (unsigned int)dec;

	if (u_dec == 0)
	{
		oct_dec[i++] = '0';
	}
	else
	{
		while (u_dec != 0)
		{
			int temp = 0;

			temp = u_dec % 8;

			oct_dec[i++] = temp + '0';

			u_dec = u_dec / 8;
		}
	}

	for (j = i - 1; j >= 0; j--)
	{
		printChar(oct_dec[j]);
		(*count)++;
	}
}

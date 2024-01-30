#include "main.h"
#include "print.h"

/**
 * printOct - Print an int
 * @dec: Int number to be printed
 * @count: Pointer to count variable
 */
void printOct(int dec, int *count)
{
	int remainder;
	int oct_num = 0;
	int i = 1;

	while (dec != 0)
	{
		remainder = dec % 8;
		oct_num = oct_num + remainder * i;
		i = i * 10;
		dec = dec / 8;
	}

	printInt(oct_num, count);
}

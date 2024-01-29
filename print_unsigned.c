#include "main.h"
#include "print.h"

/**
 * printUnsigned - Print an int
 * @num: Int number to be printed
 * @count: Pointer to count variable
 */
void printUnsigned(unsigned int num, int *count)
{
	if (num == 0)
	{
		printDigit(0, count);
	}
	else
	{
		int digits = 0, i;
		unsigned int divisor = 1, temp = num;

		while (temp != 0)
		{
			temp = temp / 10;
			digits++;
		}
		for (i = 1; i < digits; i++)
			divisor *= 10;
		while (divisor > 0)
		{
			unsigned int digit = num / divisor;

			printDigit(digit, count);
			num = num % divisor;
			divisor = divisor / 10;
		}
	}
}

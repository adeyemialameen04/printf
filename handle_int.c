#include <limits.h>
#include "main.h"

/**
 * printDigit - Print a single digit.
 * @digit: digit to be printed
 * @count: pointer to the count variable
 */
void printDigit(int digit, int *count)
{
	_putchar(digit + '0');
	(*count)++;
}

/**
 * printInt - Print an int.
 * @num: int to be printed
 * @count: pointer to the count variable
 */
void printInt(int num, int *count)
{
	if (num == INT_MIN)
	{
		_putchar('-');
		(*count)++;
		_putchar('2');
		(*count)++;
		num = 147483648;
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		(*count)++;
	}

	if (num == 0)
	{
		printDigit(0, count);
	}
	else
	{
		int digits = 0;
		int divisor = 1;
		int temp = num;
		int i;

		while (temp != 0)
		{
			temp /= 10;
			digits++;
		}

		for (i = 1; i < digits; i++)
			divisor *= 10;

		while (divisor > 0)
		{
			int digit = num / divisor;

			printDigit(digit, count);
			num %= divisor;
			divisor /= 10;
		}
	}
}

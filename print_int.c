#include <limits.h>
#include "main.h"
#include "print.h"

/**
 * printDigit - Print a single digit
 * @digit: Digit to be printed
 * @count: Pointer to count variable
 */
void printDigit(int digit, int *count)
{
	_putchar(digit + '0');
	(*count)++;
}

/**
 * printInt - Print an int
 * @num: Int number to be printed
 * @count: Pointer to count variable
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
		int digits = 0, divisor = 1, temp = num, i;

		while (temp != 0)
		{
			temp = temp / 10;
			digits++;
		}
		for (i = 1; i < digits; i++)
			divisor *= 10;
		while (divisor > 0)
		{
			int digit = num / divisor;

			printDigit(digit, count);
			num = num % divisor;
			divisor = divisor / 10;
		}
	}
}

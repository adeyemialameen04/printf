#include <limits.h>
#include "main.h"

/**
 * printInt - Print an int.
 * @num: int to be printed
 * @count: pointer to the count variable
 */
void printInt(int num, int *count)
{
	int digits = 0;
	int divisor = 1;
	int i;
	if (num == INT_MIN)
	{
		_putchar('-');
		(*count)++;

		printInt(-(num + 1), count);
		_putchar('8');
		(*count)++;
		return;
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		(*count)++;
	}

	if (num == 0)
	{
		_putchar('0');
		(*count)++;
	}
	else
	{
		int temp = num;

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

			_putchar(digit + '0');
			num %= divisor;
			divisor /= 10;
			(*count)++;
		}
	}
}

#include "main.h"
#include "print.h"

/**
 * printCustomStr - Print an int
 * @str: Int number to be printed
 * @count: Pointer to count variable
 */
void printCustomStr(char *str, int *count)
{
	if (str == NULL)
	{
		printStr("(null)", count);
		return;
	}

	while (*str)
	{
		if (*str >= 32 && *str < 127)
		{
			printChar(*str);
			(*count)++;
		}
		else
		{
			_putchar('\\');
			(*count)++;
			_putchar('x');
			(*count)++;

			if (*str < 16)
			{
				_putchar('0');
				(*count)++;
			}
			printHexCap(*str, count);
		}

		str++;
	}
}

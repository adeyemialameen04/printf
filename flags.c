#include "main.h"
#include "print.h"

/*Constants for flags*/
#define FLAG_PLUS 1
#define FLAG_SPACE 2
#define FLAG_HASH 4

/**
 * printCharWithFlags - Print a character with specified flags.
 * @ch: Char to be printed
 * @flags: Flags for the character printing
 * @count: Pointer to count variable
 */
void printCharWithFlags(char ch, int flags, int *count)
{
	/*Handle the '+' flag*/
	if (flags & FLAG_PLUS && ch >= 0)
	{
		_putchar('+');
		(*count)++;
	}
	/*Handle the ' ' flag*/
	else if (flags & FLAG_SPACE && ch >= 0)
	{
		_putchar(' ');
		(*count)++;
	}

	/*Print the character*/
	_putchar(ch);
	(*count)++;
}

/**
 * printStrWithFlags - Print a string with specified flags.
 * @str: String to be printed
 * @flags: Flags for the string printing
 * @count: Pointer to count variable
 */
void printStrWithFlags(char *str, int flags, int *count)
{
	/*Handle the '+' and ' ' flags for the first character of the string*/
	if (str && (flags & (FLAG_PLUS | FLAG_SPACE)) && *str != '\0')
	{
		if (*str >= 0)
		{
			if (flags & FLAG_PLUS)
			{
				_putchar('+');
				(*count)++;
			}
			else if (flags & FLAG_SPACE)
			{
				_putchar(' ');
				(*count)++;
			}
		}
	}

	/*Print the string*/
	printStr(str, count);
}

/**
 * printIntWithFlags - Print an int with specified flags.
 * @num: Int number to be printed
 * @flags: Flags for the integer printing
 * @count: Pointer to count variable
 */
void printIntWithFlags(signed int num, int flags, int *count)
{
	/*Handle the '+' and ' ' flags for positive integers*/
	if (num >= 0 && (flags & (FLAG_PLUS | FLAG_SPACE)))
	{
		if (flags & FLAG_PLUS)
		{
			_putchar('+');
			(*count)++;
		}
		else if (flags & FLAG_SPACE)
		{
			_putchar(' ');
			(*count)++;
		}
	}

	/*Print the integer*/
	printInt(num, count);
}

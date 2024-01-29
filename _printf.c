#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

void printChar(char ch);
void printStr(char *str, int *count);
void printInt(int num, int *count);

/**
 * _printf - Prints values based on a given format string and variable
 * arguments.
 * @format: A format string containing type specifiers('c','i','f','s').
 *       Each type specifier corresponds to the type of the following argument.
 *          If the string is NULL for 's', "(nil)" is printed.
 *          Any other characters are ignored.
 *
 * Return: No return value.
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list args;
	char ch;
	char *str;
	int dec = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			ch = va_arg(args, int);
			printChar(ch);
			count++;
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			str = va_arg(args, char *);
			printStr(str, &count);
			i += 2;
		}
		else if ((format[i] == '%' && format[i + 1] == 'd') ||
				 (format[i] == '%' && format[i + 1] == 'i'))
		{
			dec = va_arg(args, int);
			printInt(dec, &count);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			printChar(37);
			i += 2;
			count++;
		}
		else if (format[i] == '%' && format[i + 1] == 'b')
		{
			unsigned int dec_bi = va_arg(args, int);

			printBinary(dec_bi, &count);
			i += 2;
			count++;
		}
		else
		{
			printChar(format[i]);
			i++;
			count++;
		}
	}

	va_end(args);

	return (count);
}

/**
 * printChar - Print a character.
 * @ch: Char to be printed
 */
void printChar(char ch)
{
	_putchar(ch);
}

/**
 * printStr - Print a string.
 * @str: String to be printed
 * @count: Counter variable.
 */
void printStr(char *str, int *count)
{
	int i;

	if (str == NULL)
	{
		char *nullStr = "(null)";

		for (i = 0; nullStr[i] != '\0'; i++)
		{
			_putchar(nullStr[i]);
			(*count)++;
		}
	}

	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
			(*count)++;
		}
	}
}

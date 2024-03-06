#include <stdarg.h>
#include "print.h"
#include "main.h"

void handle_select_specifier(char specifier, va_list args, int *count);

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
	va_list args;
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
		else if (format[i] == '%')
		{
			char curr_format = format[i + 1];

			handle_select_specifier(curr_format, args, &count);
			i += 2;
		}
		else
		{
			printCharWithFlags(format[i], 0, &count);
			i++;
			count++;
		}
	}

	va_end(args);

	return (count);
}

#define FLAG_PLUS 1
#define FLAG_SPACE 2
#define FLAG_HASH 4

/**
 * handle_select_specifier - This function is used to handle each
 * format specifier
 * @specifier: The current specifier.
 * @args: Number of arguments passed to the printf function.
 * @count: Pointer to the count variable.
 */
void handle_select_specifier(char specifier, va_list args, int *count)
{

	int flags = 0; /*Initialize flags variable*/

	/*Check for flags*/
	while (specifier == '+' || specifier == ' ' || specifier == '#')
	{
		/*Update flags based on the given flag characters*/
		if (specifier == '+')
			flags |= FLAG_PLUS;
		else if (specifier == ' ')
			flags |= FLAG_SPACE;
		else if (specifier == '#')
			flags |= FLAG_HASH;

		specifier = va_arg(args, int); /*Get the next character after the flag*/
	}

	switch (specifier)
	{
	case 'c':
		printCharWithFlags(va_arg(args, int), flags, count);
		break;
	case 's':
		printStrWithFlags(va_arg(args, char *), flags, count);
		break;
	case 'd':
	case 'i':
		printIntWithFlags(va_arg(args, signed int), flags, count);
		break;
	case '%':
		printChar(37);
		(*count)++;
		break;
	case 'b':
	case 'B':
		printBinary(va_arg(args, int), count);
		break;
	case 'u':
		printUnsigned(va_arg(args, unsigned int), count);
		break;
	case 'o':
		printOct(va_arg(args, int), count);
		break;
	case 'x':
		printHex(va_arg(args, int), count);
		break;
	case 'X':
		printHexCap(va_arg(args, int), count);
		break;
	case 'p':
		printPtr(va_arg(args, void *), count);
		break;
	case 'r':
		printReverse(va_arg(args, char *), count);
		break;
	case 'R':
		print_rot13(va_arg(args, char *), count);
		break;
	case 'S':
		printCustomStr(va_arg(args, char *), count);
		break;
	}
}

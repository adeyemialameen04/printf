#include <stdarg.h>
#include "print.h"
#include "main.h"

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
	unsigned int un_num;
	int oct_dec;
	int hex_dec;
	void *ptr;

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
		else if ((format[i] == '%' && format[i + 1] == 'b') ||
				 (format[i] == '%' && format[i + 1] == 'B'))
		{
			unsigned int dec_bi = va_arg(args, int);

			printBinary(dec_bi, &count);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'u')
		{
			un_num = va_arg(args, unsigned int);
			printUnsigned(un_num, &count);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'o')
		{
			oct_dec = va_arg(args, int);
			printOct(oct_dec, &count);
			i += 2;
		}
		else if ((format[i] == '%' && format[i + 1] == 'x') ||
				 (format[i] == '%' && format[i + 1] == 'X'))
		{
			hex_dec = va_arg(args, int);
			printHex(hex_dec, &count);
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'p')
		{
			ptr = va_arg(args, void *);
			printPtr(ptr, &count);
			i += 2;
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

#include <stdarg.h>
#include "main.h"

void printChar(char ch);
void printStr(char *str);
void printInt(int num);


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
int i = 0;
va_list args;
char ch;
char *str;
int dec = 0;
char percent;

va_start(args, format);

while (format && format[i])
{
if (format[i] == '%' && format[i + 1] == 'c')
{
ch = va_arg(args, int);
printChar(ch);
i += 2;
}
else if (format[i] == '%' && format[i + 1] == 's')
{
str = va_arg(args, char*);
printStr(str);
i += 2;
}
else if ((format[i] == '%' && format[i + 1] == 'd') ||
(format[i] == '%' && format[i + 1] == 'i'))
{
dec = va_arg(args, int);
printInt(dec);
i += 2;
}
else if (format[i] == '%' && format[i + 1] == '%')
{
percent = va_arg(args, int);
printChar(percent);
i += 2;
}
else
{
printChar(format[i]);
i++;
}
}

va_end(args);

return (i);
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
 */
void printStr(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}

/**
* printInt - Print an int.
* @num: int to be printed
 */
void printInt(int num)
{
if (num < 0)
{
_putchar('-');
num = -num;
}

if (num == 0)
_putchar('0');
else
if (num / 10)
printInt(num / 10);
_putchar((num % 10) + '0');
}

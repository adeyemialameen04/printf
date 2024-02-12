#include "main.h"
#include "print.h"

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

#include "main.h"
#include "print.h"

/**
 * printReverse - Print an int
 * @str: String to be reversed
 * @count: Pointer to count variable
 */
void printReverse(char *str, int *count)
{
	int i, length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		printChar(str[i]);
		(*count)++;
	}
}

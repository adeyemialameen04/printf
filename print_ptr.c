#include "main.h"
#include "print.h"

/**
 * printPtr - Print an int
 * @ptr: Int number to be printed
 * @count: Pointer to count variable
 */
void printPtr(void *ptr, int *count)
{
	unsigned long num = (unsigned long)ptr;
	char hex[17] = "0123456789abcdef";
	char buffer[20];
	int i = 0;

	if (ptr == NULL)
		return;

	if (num == 0)
	{
		printStr("0x0", count);
		return;
	}

	while (num != 0)
	{
		buffer[i++] = hex[num % 16];
		num = num / 16;
	}

	printStr("0x", count);

	while (--i >= 0)
	{
		_putchar(buffer[i]);
		(*count)++;
	}
}

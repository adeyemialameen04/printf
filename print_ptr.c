#include "main.h"
#include "print.h"

/**
 * printAddress - Print the address of a pointer.
 * @ptr: Pointer whose address is to be printed.
 * @count: Pointer to the count variable.
 */
void printAddress(void *ptr, int *count)
{
	int i;
	char hex_digits[] = "0123456789abcdef";
	unsigned long int address = (unsigned long int)ptr;
	char address_str[18];

	_putchar('0');
	_putchar('x');
	(*count) += 2;

	for (i = 17; i >= 2; i--)
	{
		address_str[i] = hex_digits[address % 16];
		address /= 16;
	}

	for (i = 0; i < 18; i++)
	{
		_putchar(address_str[i]);
		(*count)++;
	}
}

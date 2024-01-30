#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "print.h"
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int number = INT_MAX;

	_printf("Octal\n");
	_printf("%o\n", number);
	printf("%o\n", number);

	_printf("Haxagon sm\n");
	_printf("%x\n", number);
	printf("%x\n", number);

	_printf("Haxagon bg\n");
	_printf("%X\n", number);
	printf("%X\n", number);

	_printf("unsigned int\n");
	_printf("%u\n", number);
	printf("%u\n", number);

	return (0);
}

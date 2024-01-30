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

	_printf("%o\n", number);
	printf("%o\n", number);

	return (0);
}

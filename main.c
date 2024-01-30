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
	int number = INT_MIN;

	_printf("%u\n", number);
	printf("%u\n", number);

	return (0);
}

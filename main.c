#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int number = 0;
	int *ptr = &number;
	_printf("%p\n", &ptr);

	printf("%p\n", &ptr);
	return (0);
}

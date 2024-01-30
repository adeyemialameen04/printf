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
	int *ptr_num = &number;

	_printf("%p\n", &ptr_num);
	printf("%p\n", &ptr_num);

	return (0);
}

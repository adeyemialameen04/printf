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
	int len = _printf("%b\n", INT_MAX);
	/* int len2 = printf("%d\n", INT_MIN);*/

	_printf("%d\n", len);
	return (0);
}

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
	int len = _printf("%b\n", 10244);
	/* 10100000000100 */
	/* 10100000001100 */
	_printf("%d", len);
	return (0);
}

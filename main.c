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

	_printf("%p\n", NULL);
	printf("%p\n", NULL);

	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len1;

	len1 = _printf("%K\n");
	_printf("%d\n", len1);
	return (0);
}

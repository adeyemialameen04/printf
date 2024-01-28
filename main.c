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
	/*
	*long long int res = INT_MAX * 2;
	_*printf("%d + %d = %d\n", INT_MAX, INT_MAX, res);
	*/
	/*int len1 = _printf("%d", NULL);*/
	int len1;
	long int res = INT_MAX * 2;

	len1 = _printf("%d + %d = %d\n", INT_MAX, INT_MAX, res);
	_printf("\n%d\n", len1);

	/*
	 *len1 = _printf("%s", NULL);
	 *printf("%d", len1);
	 *return (0);
	 */
	return (0);
}

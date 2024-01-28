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
	int len1 = printf(NULL);
	int len2 = _printf(NULL);

	printf("\n%d\n", len1);
	printf("%d\n", len2);
	/*2147483647*/
	return (0);
}

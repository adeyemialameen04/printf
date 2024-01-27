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
int len3;
/*
* int len1, len2;
* len1 = printf("%K\n");
* len2 = _printf("%K\n");
* printf("%d\n", len1);
* printf("%d\n", len2);
*/

len3 = _printf("%");
_printf("%d", len3);
return (0);
}

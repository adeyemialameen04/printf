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
int len1, len2;
len1 = _printf("%%%%");
printf("\n");
len2 = printf("%%%%");
printf("\n");


printf("I am a percentage %");


printf("Length 1 is: %d\nLength 2 is: %d\n", len1, len2);
return(0);
} 
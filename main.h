#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>

/**
 * struct BinaryResult - Struct to convert to a binary
 * @binary: Converted binary
 * @start: to keep track for the 1's
 *
 * Description: Longer description
 */
typedef struct BinaryResult
{
	char *binary;
	int start;
} BinaryResult;

int _printf(const char *format, ...);
int _putchar(char c);
void printInt(int num, int *count);
BinaryResult convertToBinary(unsigned int dec);
void printBinary(int dec, int *count);

#endif /* #ifndef _MAIN_H_ */

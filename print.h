#ifndef _PRINT_H_
#define _PRINT_H_

void printChar(char ch);
void printStr(char *str, int *count);
void printDigit(int digit, int *count);
void printInt(int num, int *count);
void printBinary(unsigned int num, int *count);
void printUnsigned(unsigned int num, int *count);
void printOct(int dec, int *count);
void printHex(int dec, int *count);
void printHexCap(int dec, int *count);
void printPtr(void *ptr, int *count);
void printCustomStr(char *str, int *count);
void printReverse(char *str, int *count);
void print_rot13(const char *str, int *count);

#endif /* #ifndef _PRINT_H_ */

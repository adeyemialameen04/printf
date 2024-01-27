#include "main.h"
#include <stdio.h>
#include <limits.h>

int  main()
{
    int len;
    int len2;
    int len3;
    unsigned int ui;
    void *addr;
    len3 = -80;

    len = _printf("Let's try to printf a simple sentence %c.\n", 'P');
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Lengthyyy:[%d, %i]\n", len3, len3);
    _printf("Length:[%d]\n", len);
    printf("Length:[%d, %i]\n", len2, len2);





printf("%p\n", addr);
printf("%lu\n", ui);
return (0);
}
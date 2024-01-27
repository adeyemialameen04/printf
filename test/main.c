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
int og, fake;
/* 1. Positive Integer */
_printf("Positive Integer: %d\n", 123);

/* 2. Negative Integer */
_printf("Negative Integer: %d\n", -456);

/* 3. Zero */
_printf("Zero: %d\n", 0);

/* 4. Large Positive Integer */
_printf("Large Positive Integer: %d\n", 987654321);

/* 5. Large Negative Integer */
_printf("Large Negative Integer: %d\n", -987654321);

/* 6. Single-Digit Positive Integer */
_printf("Single-Digit Positive Integer: %d\n", 7);

/* 7. Single-Digit Negative Integer */
_printf("Single-Digit Negative Integer: %d\n", -8);

/* 8. Integer with Leading Zeros */
printf("Integer with Leading Zeros: %d\n", 000123); /* FAIL */

/* 9. Integer Ending with Zeros */
_printf("Integer Ending with Zeros: %d\n", 12000);

/* 10. Multiple Zeros in Between Digits */
_printf("Multiple Zeros in Between Digits: %d\n", 100000);

/* 11. Integer with Spaces */
_printf("Integer with Spaces: %d\n",  456);

/* 12. Mix of Positive and Negative Integers */
_printf("Mix of Positive and Negative Integers: %d, %i\n", 123, -456);

/* 13. Integer Inside a String */
_printf("Integer Inside a String: Education is %d, Experience is what you get.\n", 42);

/* 14. Mix of Text and Integer */
_printf("Mix of Text and Integer: Education is when you read the fine print. Experience is what you get if you don't %d.\n", 789);

/* 15. NULL Integer */
og = printf("%d", NULL);
printf("\n");
fake = _printf("%d", NULL);
printf("\n");

/* 16. Integer with Special Characters */
_printf("Integer with Special Characters: Education is %d$, Experience is %i#.\n", 456, -789);

/* 17. Non-Numeric String */

/* 18. Mix of %d and %i */
/* printf("Mix of %%d and %%i: Education is %d, Experience is %i.\n", 123, -456); */

printf("OGGG ISSS %d\n", og);
_printf("FAKEE ISSS %d\n", fake);
return (0);
}

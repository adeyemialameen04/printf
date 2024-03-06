#include "main.h"
#include "print.h"

/**
 * print_rot13 - Handles rot13.
 * @str: String to be handled.
 * @count: Count variable.
 * Return: None.
 */
void print_rot13(const char *str, int *count)
{
	if (str == NULL)
		return;

	for (int i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];

		if (isalpha(c))
		{
			char base = islower(c) ? 'a' : 'A';
			char rotated = ((c - base + 13) % 26) + base;

			putchar(rotated);
			(*count)++;
		}
		else
		{
			putchar(c);
			(*count)++;
		}
	}
}

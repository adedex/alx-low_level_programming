#include "main.h"
/**
 * print_alphabet - Print lower case alphabets using putchar
 * Return: 0
 */
void print_alphabet(void)
{
	char lower_case;

	for (lower_case = 'a' ; lower_case <= 'z' ; lower_case++)
	{
		_putchar (lower_case);
	}
_putchar ('\n');
}

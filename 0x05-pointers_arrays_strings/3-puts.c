#include "main.h"

/**
 * _puts: prihts string to stdout 
 * @str: pointer to the string yo print
 * Return : 0
 */
void _puts(char *str)
{
	int i;

	for(i = 0; str[i] != '\0'; i++)
	{
	_puts(str[i]);
	}
	_puts('\n');
}

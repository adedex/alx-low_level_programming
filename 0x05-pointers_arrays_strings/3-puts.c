#include "main.h"

/**
 * _puts: 
 *
 * Return : 0
 */
void _puts(char *str)
	int i;

	for(i = 0; str[i] != '\0';)
	i++;
	_puts(str[i]);
	_puts('\n');

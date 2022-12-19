#include "main.h"
#include <stdio.h>

/**
 * int _strlen - returns the length of a string
 * @s - string to evaluate
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;

	for(i = 0; s[i] != '\0'; ++i);
	return(i);
}

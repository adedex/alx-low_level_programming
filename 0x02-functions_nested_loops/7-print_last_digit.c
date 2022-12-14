#include "holberton.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @p:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int p)
{
	if (p > 0 || p == 0)
	{
	_putchar (p % 10 + '0');
	return (p % 10);
	}
	else
	{
	p = p * -1;
	_putchar (p % 10 + '0');
	return (p % 10);
	}
}

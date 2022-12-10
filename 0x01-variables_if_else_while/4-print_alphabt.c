#include <stdio.h>
/**
 *main - Entry point
 *Return: 1 (Success)
 */

int main(void)
{
	char alphabet, e, q;

	e = 'e';
	q = 'q';
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	if (alphabet != e && alphabet != q)
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}

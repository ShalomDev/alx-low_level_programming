#include "main.h"

/**
 * print_alphabet - entry point
 * Description - prints alphabet in lowercase
 * return
 */
void print_alphabet(void)
{
	char c = 'a';

	while(c <='z')
	{
		_putchar(c);
		c++;
	}
_putchar('\n')	;

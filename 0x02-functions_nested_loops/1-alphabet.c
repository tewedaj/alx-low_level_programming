#include "main.h"

/**
 * print_alphabet - function starts here
 * Description: prints a-z
 */

void print_alphabet(void)
{
	char lcase = 'a';

	for (lcase = 'a'; lcase <= 'z'; lcase++)
		_putchar(lcase);
	_putchar('\n');
}

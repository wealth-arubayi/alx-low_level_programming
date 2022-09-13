#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char al;
	al = 'a';

	while (al <= 'z')
	{
		_putchar(al);
		al++;
	}

	_putchar('\n');
}


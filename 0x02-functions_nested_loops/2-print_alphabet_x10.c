#include "main.h"

/*
* Main - prints out letters in lower case
*/


void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}


void print_alphabet_x10(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		print_alphabet();
	}
}
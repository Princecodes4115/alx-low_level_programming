#include "main.h"

/**
* print_numbers - print the numbers from 0 to 9
*
* Return: 0-9 followed by newline
*/
void print_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

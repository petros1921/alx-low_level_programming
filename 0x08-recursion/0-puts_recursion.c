#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 * @s: the string to print
 *
 * Return: Nothing.
 */
void _pits_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}

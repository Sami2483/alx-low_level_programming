#include "main.h"
/**
 * _puts_recursion- prints a string
 * @s: first string
 */
void _puts_recursion(char *s)
{
	int x = 0;

	if (*(s + x) == '\0')
		return;
	x++;
	_puts_recursion(*(s + x));
			}

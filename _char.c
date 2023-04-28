#include "main.h"

/**
 * ch - function to return char
 * @character: list given
 * Return: number of char printed
 */
int ch(va_list character)
{
	int c = va_arg(character, int);

	_putchar(c);
	return (1);
}

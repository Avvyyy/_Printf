#include "main.h"

/**
 * _putchar - FUnctiont to print a character to standard output
 * @c: Character to be printed
 *
 * Return: Number of bytes written else -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

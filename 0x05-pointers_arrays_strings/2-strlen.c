#include "main.h"

/**
 * _strlen-returns the lenght of astring.
 * @s: the string to get the lenght of .
 * return :the lenght @s.
 */

int _strle(nchar *s)
{
	int lenStr = 0;

	while (*s++)
		lenStr++;

	return (lenStr);
}

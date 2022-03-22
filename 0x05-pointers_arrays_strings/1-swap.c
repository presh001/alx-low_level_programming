#include "main.h"

/**
 * swap_int -swaps the values of two integers.
 * @: first integer.
 * @b: second integer.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a; /* tmp value a*/
	*a = *b;   /*a value b */
	*b = tmp; /*b value tmp*/
}

#include "main.h"
/**
 * swap_int swaps the values of two integers
 * int a: integer to swap
 * int b; integer to swap
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}

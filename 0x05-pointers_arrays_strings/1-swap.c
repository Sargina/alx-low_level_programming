#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: par 1
 * @b: par 2
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}

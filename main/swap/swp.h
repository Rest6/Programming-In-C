#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
int tmp = *a;
*a = *b;
*b = tmp;

//printf("in swap() function a is: %i\n", *a);
//printf("in swap() function b is: %i\n", *b);
}

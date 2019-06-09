#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int swap(int a, int b)
{
int testA = a;	
int testB = b;

int tmp = a;
a = b;
b = tmp;
assert(a != testA);
assert(b != testB);
printf("value of a: %i\n",a);
printf("value of b: %i\n",b);
return 0;
}

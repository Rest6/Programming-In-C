#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b);

int main(void)
{
char* str = "abc";
printf("The value of str is: %s\n", str);

int a = 10;
int b = 11;

printf("a is %i\n", a);
printf("b is %i\n", b);
swap(&a, &b);
printf("a is %i\n", a);
printf("b is %i\n", b);

return 0;
}


void swap(int* a, int* b)
{
int tmp = *a;
*a = *b;
*b = tmp;

printf("in swap() function a is: %i\n", *a);
printf("in swap() function b is: %i\n", *b);
}

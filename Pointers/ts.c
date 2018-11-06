#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int* x;
int* y;

x = malloc(sizeof(int));
y = malloc(sizeof(int));

*x = 42;
*y = 13;
printf("Value of *x is: %i\n", *x);
printf("Value of *y is: %i\n", *y);

y = x;
printf("Value of y is: %i\n", y);

*y = 13;

printf("Value of *y is: %i\n", *y);

return 0;
}

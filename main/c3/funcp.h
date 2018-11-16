#include <stdio.h>
#include <stdlib.h>

typedef int (*fptrOperation)(int,int);

int add(int a, int b)
{
return a + b;
}

int subtract(int a, int b)
{
return a - b;
}

int compute(fptrOperation operation, int a, int b)
{
return operation(a, b);
}

#include <stdio.h>
#include <stdlib.h>
typedef int (*fptrOperation)(int,int);
int add(int,int);
int subtract(int,int);
int compute(fptrOperation, int, int);
int (*operations[128])(int, int) = {NULL};
void initializeOperationsArray();
int evaluateArray(char, int, int);

//initializeOperationsArray();
//printf("%d\n",evaluateArray('+', 5, 6));
//printf("%d\n",evaluateArray('-', 5, 6));

void initializeOperationsArray()
{
operations['+'] = add;
operations['+'] = subtract;
}

int evaluateArray(char opcode, int a, int b)
{
fptrOperation operation;
operation = operations[opcode];
return operation(a,b);
}

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


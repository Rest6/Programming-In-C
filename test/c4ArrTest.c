#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "/home/qa/gitTutor/develop/cucumber-book/main/c4/arr.h"

typedef int (*fptrOperation)(int,int);
int add(int,int);
int subtract(int,int);
int compute(fptrOperation, int, int);
//int (*operations[128])(int, int) = {NULL};
void initializeOperationsArray();
int evaluateArray(char, int, int);


int main(void)
{
initializeOperationsArray();
printf("%d\n",evaluateArray('+', 5, 6));
printf("%d\n",evaluateArray('-', 12, 11));

return 0;
}

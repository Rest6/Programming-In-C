#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "/home/qa/gitTutor/develop/cucumber-book/main/c2/po.h"

void charge(int*);
int main()
{
printf("Given: I enter the positive number: 12\n");
int n = 12;
printf("And: I use 'charge()' function\n");
charge(&n);
printf("Then: I check that result is 2\n");
assert(n == 2);
return 0;
}

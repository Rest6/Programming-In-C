#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "/home/qa/gitTutor/develop/cucumber-book/main/c3/funcp.h"

int add(int,int);
int subtract(int,int);

int main()
{
printf("Feature: 'funcp' function test\n\n");

printf("Scenario: add() function testing\n\n");
printf("Given: I create 'a' variable that is number 10\n");
int a = 10;
printf("And: I create 'b' variable that is number 11\n");
int b = 11;
printf("When: I pass this variables to 'add()' function\n");
add(a,b);
printf("Then: I assert that the sum is: 21 \n\n");
assert(add(a,b) == 21);

printf("Scenario: subtract() function testing\n\n");
printf("Given: I create 'c' variable that is number 20\n");
int c = 20;
printf("And: I create 'b' variable that is number 2\n");
int d = 2;
printf("When: I pass this variables to 'subtract()' function\n");
subtract(c,d);
printf("Then: I assert that the sum is: 18 \n\n");
assert(subtract(c,d) == 18);

return 0;
}

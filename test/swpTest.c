#include "swp.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void swap(int* a, int* b);

int main(void)
{
int a = 11;
int b = 12;
printf("Feature: swp programm testing\n\n");
printf("Scenario: 'swap() method functionality test'\n\n");

printf("Given I get 2 int values: a = %i, b = %i\n", a, b);
printf("When I swap 'a' and 'b' variables\n");
swap(&a,&b);

printf("And I check that 'a' has 'b' value\n");
assert(a == 12);

printf("Then I check that 'b' has 'a' value\n\n");
assert(b == 11);

return 0;
}

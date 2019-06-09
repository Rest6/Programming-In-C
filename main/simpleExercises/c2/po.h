#include <stdio.h>
#include <stdlib.h>

void charge(int* a)
{
int *charge = (int*) malloc(sizeof(int));
*charge = 10;

do{
printf("Enter your positive number: \n");

*a = *a - *charge;
}while(*a <= 0);
}

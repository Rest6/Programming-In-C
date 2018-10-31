#include <stdio.h>
#include <stdlib.h>
#include "rd.c"

int max();

int main(int argc, char *argv[])
{

int a = atoi(argv[1]);
int b = atoi(argv[2]);
printf("The max number is: %i\n", max(a, b));
printf("Products list: %d", fileReader());

return 0;
}

int max(int a, int b){
int max = 0;
if(a > b) {
max = a;
}

if(a < b) {
max = b;
}

if(a == b){
printf("The numbers are equal\n");
}
return max;
}

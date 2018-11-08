#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{

int max = 0;
int a = atoi(argv[1]);
int b = atoi(argv[2]);
//printf("this b: %i\n",b);
//printf("this a: %i\n",a);
if(a > b) {
max = a;
printf("The max number is: %i\n", max);
}

if(a < b) {
max = b;
printf("The max number is: %i\n", max);
}

return 0;
}

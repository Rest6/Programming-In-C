#include <stdio.h>
#include <stdlib.h>

int rec();

int main(int argc, char *argv[])
{
int a = atoi(argv[1]);

printf("The result of recrusion is: %i\n", rec(a));

return 0;
}


int rec(int a){
int tmp = 0;

if(a != 0)
{
tmp = a - rec(a - 1);
}
return a;
printf("The value of a variable: %i\n", tmp);
}

#include <stdio.h>
#include <stdlib.h>

int r();

int main(int argc, char *argv[]){

printf("The result of r function is: %i\n", r(atoi(argv[1])));

return 0;	
}

int r(int n)
{

if(n == 1)
{
return 1;
}

return n * r(n - 1);
}

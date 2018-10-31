#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

char a = *argv[1];

printf("your letter is: %s \n", &a);


return 0;
}

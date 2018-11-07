#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{

char* str = argv[1];
int n = atoi(argv[2]);
int i;

for(i = 0; i < n; i++)
{
printf("The value of str is: %s\n", str);
}

return 0;
}


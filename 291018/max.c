#include <stdio.h>

int main(int result)
{

result = max(11,33); 

printf("The result is: %x", &result);

return 0;
}

int max(int* a, int* b)
{
int max = 0;

if(*a > *b)
{
max = *a;
}

return max;
}

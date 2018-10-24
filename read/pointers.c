#include <stdio.h>

int main()
{
int a = 20;
int *ip;

ip = &a;

printf("address of a: %x\n", a);

printf("address of ip: %x\n", ip);

printf("address of *ip: %x\n", *ip);

return 0;
}

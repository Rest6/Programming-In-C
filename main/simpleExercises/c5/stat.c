#include <stdio.h>
#include <stdlib.h>

char* staticFormat(const char*, size_t, size_t);
int main(void)
{

char* a = staticFormat("Alex",25,98);
char* b = staticFormat("Piston",26,101);

printf("User a is: %s\n\n",a);
printf("User b is: %s\n\n",b);

return 0;
}

char* staticFormat(const char* name, size_t quantity, size_t weight) {
static char buffer[64];
sprintf(buffer, "Item: %s Quantity: %lx Weight: %lx", name, quantity, weight);
return buffer;
}

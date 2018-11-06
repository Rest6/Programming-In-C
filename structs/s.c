#include <stdio.h>
#include <stdlib.h>
#include "stru.h"

#define CLIENTS 3

int main(void)
{

client clients[CLIENTS];

for(int i = 0; i < CLIENTS; i++)
{
printf("Client's name: \n");
clients[i].name = "Test";

printf("Client's name: %s\n", clients[i].name);
}

return 0;
}

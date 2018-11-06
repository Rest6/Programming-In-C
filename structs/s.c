#include <stdio.h>
#include <stdlib.h>
#include "stru.h"

#define CLIENTS 3

int main(int argc, char* argv[])
{

client clients[CLIENTS];

for(int i = 0; i < CLIENTS; i++)
{
printf("Client's name: \n");
clients[i].name = argv[1];

printf("Client's address: \n");
clients[i].address = argv[2];

printf("Client's name: %s\n", clients[i].name);
}

FILE* file = fopen("clients.csv", "w");
if(file != NULL)
{
	for(int i = 0; i < CLIENTS; i++)
	{
	fprintf(file, "%s,%s\n", clients[i].name, clients[i].address);
	}
	fclose(file);
}

for(int i = 0; i < CLIENTS; i++)
{
	free(clients[i].name);
	free(clients[i].address);
}

return 0;
}

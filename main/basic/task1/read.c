#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char name[10];
	gets(name);
	if(name[0] == ' ')
	{
		memmove(name, name+1, strlen(name));
	}	
	else if(name[9] == ' ')
	{
		name[10] = name[strlen(name)-1];
	}
	printf("Username: %s\n",name);
	return 0;
}

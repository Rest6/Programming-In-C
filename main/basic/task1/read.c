#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* last(char*);
char* upper(char*);

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
	printf("Result of lastName function: %s\n",last(name));
	printf("Uppercase word: %s\n", upper(name));
	return 0;
}

char* last(char* lastName)
{
	char test[10] = "";
	int i = 0;

	printf("Brfote all %s \n",test);
	
	for(i = 0; i < strlen(lastName); i++)
	{
		if(lastName[i] == ' ')
		{
			while(scanf("%c",lastName) != '!')
			{
				test[i] = lastName[i];
			
			}
		}
	}

	printf("func result: %s\n",test);	
	lastName = test;
	return lastName;
}

char* upper(char str[])
{
	int c = 0;

	while (str[c] != '\0')
	{
	if(str[c] >= 'a' && str[c] <= 'z')
	{
		str[c] = str[c] - 32;
	}
		c++;
	}
	return str;
}



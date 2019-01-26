#include <stdio.h>
#include <stdlib.h>

char* getLine(void)
{
const size_t sizeI = 10;
char* buffer = malloc(sizeI);
char* curP = buffer;
size_t maxL = sizeI;
size_t len = 0;

if(curP == NULL)
{
return NULL;
}

while(1)
{
char character  =  fgetc(stdin);
if(character == '\n')
{
break;
}

if(++len >= maxL)
{
	char *newBuff = realloc(buffer, maxL += sizeI);

	if(newBuff == NULL)
	{
		free(buffer);
		return NULL;
	}

	curP = newBuff + (curP - buffer);
	buffer = newBuff;
}
*curP++ = character;
}
*curP = '\0';
return buffer;
}

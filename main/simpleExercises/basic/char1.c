#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char *s;

	s = (char *) malloc (100);
	strcpy(s,"hello");
	free(s);
	return 0;
}

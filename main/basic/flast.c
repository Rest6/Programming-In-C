#include <stdio.h>
#include <string.h>

int main()
{
	char s[100], *p;
	gets(s);
	p = s;
	while (*p==' ')
		p++;
	printf("%s\n",p);
	return 0;
}

#include <stdio.h>

int main()
{

	char arr[5];
	int i;

	for(i = 0; i < 5; i++)
	{
	printf("Address of arr[%d] = %u\n", i, &arr[i]);
	
	}
return 0;
}

#include <stdio.h>

int main(void)
{
	int ratingCountries[11], i, response;

	for(i = 1; i <= 10; ++i)
		ratingCountries[i] = 0;
	
	printf("Enter your serponses\n");
	
	for(i = 1; i <= 20; ++i){
		scanf("%i",&response);

		if(response < 1 || response > 10){
			printf("Bad response: %i\n", response);
		}else{
			++ratingCountries[response];
		}	
	}

	printf("\n\nRating Number of Responses\n");
	printf("----  ------------------------\n");

	for(i = 1; i <= 10; ++i)
		printf("%4i%14i\n",i,ratingCountries[i]);
	return 0;	
}

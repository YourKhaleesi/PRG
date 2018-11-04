#include <stdio.h>

int main(void){
	int limit;
	int i=1;
	long long fak = 1;
	printf("Geben Sie ein Limit an:");
	if (scanf("%d", &limit)==0){	
		printf("not an integer");
		return 0;
	}
	
	while(i <= limit);
	
	do {
		fak *= i;
		i++;
		printf("%lld\n", fak);
		
	}
	
	printf("%d! ist gleich %lld", limit, fak);

	
	

	return 0;
}
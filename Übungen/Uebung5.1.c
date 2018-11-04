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
	
	do {
		fak *= i;
		i++;
		printf("%lld\n", fak);
		
	} while(i <= limit);
	
	printf("%d! ist gleich %lld", limit, fak);
	printf(typeof(fak));
	
	

	return 0;
}
#include <stdio.h>

int main(void){
	int limit;
	long long fak = 1;
	printf("Geben Sie ein Limit an:");
	if (scanf("%d", &limit)==0){	
		printf("not an integer");
		return 0;
	}
	
	for(int i = 1; i <=limit; i++) {
		fak*=i;
		printf("%lld\n", fak);
	}
	/* while(i <= limit) {
		fak *= i;
		i++;
		printf("%lld\n", fak);  //do while wird i zum Schluss geprüft (Fußgesteurt), während while am Anfang prüft
		
	}
	*/
	
	printf("%d! ist gleich %lld", limit, fak);

	
	

	return 0;
}
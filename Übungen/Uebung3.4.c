#include <stdio.h>

int main(void){
	int jahr;
	
	printf ("Geben Sie eine Jahreszahl ein: ");
	scanf ("%d", &jahr);
	
	if ( jahr % 4 == 0 && jahr % 100 != 0 || jahr % 400 == 0) {
		printf("Beim Jahr %d handelt es sich um ein Schaltjahr", jahr);
	}
	
	else printf("Beim Jahr %d handelt es sich um kein Schaltjahr", jahr);
	
	return 0;
}
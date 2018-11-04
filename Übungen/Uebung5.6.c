#include <stdio.h>

int main(void){
	int height;
	printf("Wie hoch soll der Baum werden?\n");
	scanf("%d", &height);

	for(int i = 1; i <=height; i++) { 
	
		for(int j = 1; j <=height-i; j++){ // Zentrierung
		printf(" ");
	}
		for(int j = 1; j<=(2*i-1); j++){ //Sterne
		printf("*");
	}
		printf("\n");  //Zeilenumbruch
		
	}
	for(int i = 1; i < height; i++){
	printf(" ");
	}
	printf("*");  //Stamm
	

		
	return 0;
}
#include <stdio.h>

int main(void){
	int height;
	printf("Wie hoch soll der Baum werden?\n");
	scanf("%d", &height);

	for(int i = 1; i <=height; i++) {  //solange i kleiner als Limit, führe den Codeblock{} aus.
	
		for(int j = 1; j <=height-i; j++){ // Zentrierung
		printf(" ");
	}
		for(int j = 1; j<=(2*i-1); j++){ //Sterne
		printf("*");
	}
		printf("\n");
		
	}
	for(int i = 1; i < height; i++){
	printf(" ");}
	printf("*");
	

		
	return 0;
}
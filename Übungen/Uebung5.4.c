#include <stdio.h>

int main(void){
	int limit = 30;
	int a = 1;
	int b = 0;

	printf("0\n1\n");
	for(int i = 0; i <limit; i++) {  //solange i kleiner als Limit, führe den Codeblock{} aus. Am Anfang ist
		int temp = a;
		a+=b;
		b = temp;
		printf("%d\n", a);
	
	}
		
	return 0;
}
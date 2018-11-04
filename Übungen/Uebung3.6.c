#include <stdio.h>

// Definition der Operatoren per Präprozessor-Anweisungen
#define ADDITION '+'
#define SUBTRAKTION '-'
#define MULTIPLIKATION '*'
#define DIVISION '/'
#define DIVISIONSREST '%'

int main(void){
	
	long operand1; 
	long operand2; 
	char operator; 
	double ergebnis; 
	
	// Parameter einlesen
	scanf("%d%c%d",&operand1,&operator,&operand2); //switch-case wird nur verwendet, wenn es klar definierte Fälle gibt. If-else eher bei ungenaueren Definitionswerten verwenden
	
	// Fallunterscheidung mit switch case
	switch (operator) {
		case ADDITION:
			ergebnis = operand1 + operand2; 
			printf("%d %c %d = %lf",operand1,operator,operand2,ergebnis); 
			break; 
		case SUBTRAKTION:
			ergebnis = operand1 - operand2; 
			printf("%d %c %d = %lf",operand1,operator,operand2,ergebnis); 
			break; 
		case MULTIPLIKATION:
			ergebnis = operand1 * operand2; 
			printf("%d %c %d = %lf",operand1,operator,operand2,ergebnis); 		
			break; 
		case DIVISION:
			if (operand2 == 0) {	
				ergebnis = operand2; 
				printf("%d %c %d = %lf",operand1,operator,operand2,ergebnis); 
			}
			else {	
				ergebnis = (double) operand1 / operand2; 
				printf("%d %c %d = %lf",operand1,operator,operand2,ergebnis); 
		}		
			break; 
		case DIVISIONSREST:
			ergebnis = operand1 % operand2; 
			printf("%d %c %d = %lf",operand1,operator,operand2,ergebnis); 		
			break; 	
		default: 
			printf("Der Operator '%c' ist nicht bekannt!",operator); 
			break; 							
	}
	
	return 0;
}
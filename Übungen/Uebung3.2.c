#include <stdio.h>

int main(void){
	
	long operand1;
	long operand2;
	char operator;
	long ergebnis;
	
	printf ("Geben Sie Ihre Rechnung ohne Leerzeichen ein");
	scanf ("%d%c%d", &operand1,&operator,&operand2); //warum %d f�r long und nicht %ld?
	
	if (operator == '+') {
		ergebnis = operand1 + operand2;
		printf("Die Summe von Operand1 und Operand2 ist %ld", ergebnis);	//%lf besser
	}
	 
	else if (operator == '-') {
		ergebnis = operand1 - operand2;
		printf("Die Differenz von Operand1 und Operand2 ist %ld", ergebnis);//%lf besser
	}
	
	else if (operator == '*') {
		ergebnis = operand1 * operand2;
		printf("Das Produkt von Operand1 und Operand2 ist %ld", ergebnis);//%lf besser
	}
	
	else if (operator == '/') {
		ergebnis = (double) operand1 / operand2;
		printf("Der Quotient von Operand1 und Operand2 ist %ld", ergebnis);//%lf besser; Operand2=0 w�re ein Fehler. Weitere if-Bdg. einf�gen
	}
	
	else if (operator == '%') {
		ergebnis = operand1 % operand2;
		printf("Der Rest von Operand1 und Operand2 ist %ld", ergebnis);//%lf besser
	} 
	
	else printf("Ueberpr�fe deine Eingabe");
	
	
	return 0;
}
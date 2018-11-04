#include <stdio.h>
#include <math.h>

int main(void){
	int a;
	int b;
	printf("Geben Sie eine Zahl ein!");
	scanf("%d", &a);
	printf("Geben Sie eine Zahl ein!");
	scanf("%d", &b);
	
	int summe = a + b;
	int differenz = a - b;
	int produkt = a * b;
	int quotient = a / b;
	int rest = a % b;
	
	int potenzA = pow(a,2);
	int potenzA2 = pow(a,3);
	int potenzB = pow(b,2);
	int potenzB2 = pow(b,3);
	int binomischeFormel1 = pow(( a + b),2);
	int binomischeFormel2 = pow(( a - b),2);
	int binomischeFormel3 = ( a + b ) * ( a - b );
	int mittelwert = (a+b)/2;
	int inkrementa = ++a; 
	int inkrementb = ++b; 
	int dekrementa = --a - 1; //geht mit "--a" nicht, zieht hier jedoch von a++ ab
	int dekrementb = --b - 1; 
	
	
	printf("Summe von Zahl1 und Zahl2: %d\n", summe); 
	printf("Differenz von Zahl1 und Zahl2: %d\n", differenz);
	printf("Produkt von Zahl1 und Zahl2: %d\n", produkt);
	printf("Quotient mit Rest von Zahl1 und Zahl2: %d und Rest %d\n", quotient, rest);
	printf("Quadratzahl von Zahl1: %d\n", potenzA);
	printf("Kubikzahl von Zahl1: %d\n", potenzA2);
	printf("Quadratzahl von Zahl2: %d\n", potenzB);
	printf("Kubikzahl von Zahl2: %d\n", potenzB2);
	printf("Das Ergebnis der 1. Binomischen Formel: %d\n", binomischeFormel1);
	printf("Das Ergebnis der 2. Binomischen Formel: %d\n", binomischeFormel2);
	printf("Das Ergebnis der 3. Binomischen Formel: %d\n", binomischeFormel3);
	printf("Mittelwert von Zahl1 und Zahl2: %d\n", mittelwert);
	printf("Beide Zahlen um 1 erhoeht: %d und %d\n", inkrementa, inkrementb);
	printf("Beide Zahlen um 1 erniedrigt: %d und %d\n", dekrementa, dekrementb);
	
	return 0;
}
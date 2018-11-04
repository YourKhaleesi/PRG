#include <stdio.h>
#include <math.h> //keine Standard-Bibliothek, nicht unbedingt damit arbeiten. Alternativ siehe Kommentare

int main(void){
	int a, b; //Deklaration der Variablen a&b ohne Initialisierung
	
	printf("\tGeben Sie eine Zahl ein!");
	scanf("%d", &a); 						//%d und %i sind relativ gleich
	printf("\tGeben Sie eine Zahl ein!");
	scanf("%d", &b);
	
	int summe = a + b;
	int differenz = a - b;
	int produkt = a * b;
	int quotient = a / b;
	int rest = a % b;
	
	int potenzA = pow(a,2); //a*a
	int potenzA2 = pow(a,3); //a*a*a
	int potenzB = pow(b,2);
	int potenzB2 = pow(b,3);
	int binomischeFormel1 = pow(( a + b),2); //(a+b)*(a+b)
	int binomischeFormel2 = pow(( a - b),2);
	int binomischeFormel3 = ( a + b ) * ( a - b );
	int mittelwert = (a+b)/2;
	int inkrementa = ++a; // a + 1 oder a += 1
	int inkrementb = ++b; 
	int dekrementa = --a - 1; //geht mit --a nicht, zieht hier von neuem Wert (a++) ab
	int dekrementb = --b - 1; 
	
	
	printf("\n\tSumme von Zahl1 und Zahl2: %d\n", summe); 		// "\t" steht für Tabulator
	printf("\tDifferenz von Zahl1 und Zahl2: %d\n", differenz);
	printf("\tProdukt von Zahl1 und Zahl2: %d\n", produkt);
	printf("\tQuotient mit Rest von Zahl1 und Zahl2: \t%d und Rest %d\n", quotient, rest);
	
	printf("\tQuadratzahl von Zahl1: %d\n", potenzA);
	printf("\tKubikzahl von Zahl1: %d\n", potenzA2);
	printf("\tQuadratzahl von Zahl2: %d\n", potenzB);
	printf("\tKubikzahl von Zahl2: %d\n", potenzB2);
	printf("\tDas Ergebnis der 1. Binomischen Formel: %d\n", binomischeFormel1);
	printf("\tDas Ergebnis der 2. Binomischen Formel: %d\n", binomischeFormel2);
	printf("\tDas Ergebnis der 3. Binomischen Formel: %d\n", binomischeFormel3);
	printf("\tMittelwert von Zahl1 und Zahl2: %d\n", mittelwert);
	printf("\tBeide Zahlen um 1 erhoeht: %d und %d\n", inkrementa, inkrementb);
	printf("\tBeide Zahlen um 1 erniedrigt: %d und %d\n", dekrementa, dekrementb);
	
	return 0;
}
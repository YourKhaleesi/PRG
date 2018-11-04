#include <stdio.h>
#include <math.h> //keine Standard-Bibliothek, nicht unbedingt damit arbeiten. Alternativ siehe Kommentare

int main(void){
	double a, b; //Deklaration der Variablen a&b ohne Initialisierung
	
	printf("\tGeben Sie eine Zahl ein!");
	scanf("%lf", &a); 						//%d und %i sind relativ gleich
	printf("\tGeben Sie eine Zahl ein!");
	scanf("%lf", &b);
	
	double summe = a + b;
	double differenz = a - b;
	double produkt = a * b;
	double quotient = a / b;
	double rest = a % b;
	
	double potenzA = pow(a,2); //a*a
	double potenzA2 = pow(a,3); //a*a*a
	double potenzB = pow(b,2);
	double potenzB2 = pow(b,3);
	double binomischeFormel1 = pow(( a + b),2); //(a+b)*(a+b)
	double binomischeFormel2 = pow(( a - b),2);
	double binomischeFormel3 = ( a + b ) * ( a - b );
	double mittelwert = (a+b)/2;
	double inkrementa = ++a; // a + 1 oder a += 1
	double inkrementb = ++b; 
	double dekrementa = --a - 1; //geht mit --a nicht, zieht hier von neuem Wert (a++) ab
	double dekrementb = --b - 1; 
	
	
	printf("\n\tSumme von Zahl1 und Zahl2: %0.02lf\n", summe); 		// "\t" steht für Tabulator
	printf("\tDifferenz von Zahl1 und Zahl2: %0.02lf\n", differenz);  
	printf("\tProdukt von Zahl1 und Zahl2: %0.02lf\n", produkt);
	printf("\tQuotient von Zahl1 und Zahl2: \t%0.02lf\n", quotient);
	
	printf("\tQuadratzahl von Zahl1: %0.02lf\n", potenzA);
	printf("\tKubikzahl von Zahl1: %0.02lf\n", potenzA2);
	printf("\tQuadratzahl von Zahl2: %0.02lf\n", potenzB);
	printf("\tKubikzahl von Zahl2: %0.02lf\n", potenzB2);
	printf("\tDas Ergebnis der 1. Binomischen Formel: %0.02lf\n", binomischeFormel1);
	printf("\tDas Ergebnis der 2. Binomischen Formel: %0.02lf\n", binomischeFormel2);
	printf("\tDas Ergebnis der 3. Binomischen Formel: %0.02lf\n", binomischeFormel3);
	printf("\tMittelwert von Zahl1 und Zahl2: %0.02lf\n", mittelwert);
	printf("\tBeide Zahlen um 1 erhoeht: %d und %0.02lf\n", inkrementa, inkrementb);
	printf("\tBeide Zahlen um 1 erniedrigt: %d und %0.02lf\n", dekrementa, dekrementb);
	
	return 0;
}
#include <stdio.h>

int main(void){
	// Deklaration der Variablen a und b ohne Initialisierung
  	double a, b, c, d;			// longdouble ist IMMER richtig, zieht aber mehr Speicher
	
	// Einlesen der Werte für a, b, c und d über die Kommandozeile (einzeln)
	// Initialisierung der Variablen
  	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	scanf("%lf", &d);

		// Einlesen der Werte für a, b, c und d über die Kommandozeile (zusammen)
	// Initialisierung der Variablen
  	//scanf("%lf, %lf, %lf, %lf", &a, &b, &c, &d); // lf= longfloat; für doubles
	
	// Formatierte Ausgabe
	printf("+-----------+-----------+\n"); 
	printf("| %09.02lf | %09.02lf |\n",a,b);  //% = Platzhalter, 09 = 9 führende Nullen, 02 = 2 Nachkommastellen, lf = double
	printf("+-----------+-----------+\n"); 
	printf("| %09.02lf | %09.02lf |\n",c,d); 
	printf("+-----------+-----------+\n"); 
  	return 0;
	return 0;
}
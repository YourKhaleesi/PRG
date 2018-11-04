#include <stdio.h>
#define pi 3.14159265359

int main(void){
	double d;
	double h;

	printf ("Welchen Durchmesser hat der Zylinder? ");
	scanf ("%lf", &d);
	printf ("Welche Hoehe hat der Zylinder? ");
	scanf ("%lf", &h);
	
	double mantelflaeche = pi * d * h;
	printf ("\nDie Mantelflaeche betraegt %0.06lf m²\n", mantelflaeche);
	
	double volumen = pi * ((d/2) * (d/2)) * h;
	printf ("Das Volumen betraegt %0.06lf m³\n", volumen);
	
	return 0;
}
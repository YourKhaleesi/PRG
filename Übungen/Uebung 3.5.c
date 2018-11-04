#include <stdio.h>
#define beginn_gregorianischer_kalender 1583 // nur notwendig, wenn die Bedingung 1583 häufiger vorkommt & man nur 1x Wert ändern möchte; hier nicht notwendig
#define gregorianischer_kalender "gregorianische"
#define julianischer_kalender "julianische"

int main(void){
	int jahr;
	
	printf ("Geben Sie eine Jahreszahl ein: ");
	scanf ("%d", &jahr);
	
	if (jahr >= beginn_gregorianischer_kalender) {	
		if (jahr % 4 == 0 && jahr % 100 != 0 || jahr % 400 == 0) {
			// Schaltjahr
			printf("Im Jahr %d galt der %s Kalender und es handelt sich um ein Schaltjahr.",jahr,gregorianischer_kalender); 
		}
		else {
			// kein Schaltjahr
			printf("Im Jahr %d galt der %s Kalender und handelt es sich um kein Schaltjahr.",jahr,gregorianischer_kalender); 
		}
	}
	else {
		if (jahr % 4 == 0) {
			// Schaltjahr
			printf("Im Jahr %d galt der %s Kalender und handelt es sich um ein Schaltjahr.",jahr,julianischer_kalender); 
		}
		else {
			// kein Schaltjahr
			printf("Im Jahr %d galt der %s Kalender und handelt es sich um kein Schaltjahr.",jahr,julianischer_kalender); 
		}
	}
	
	
	return 0;
}
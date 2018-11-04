#include <stdio.h>

int main(void){
	
	int note = 0; // =0 ist bei anderen Sprachen wichtig, da das System sonst was anderes angibt
	
	printf ("Gib deine Punktezahl ein: ");
	scanf ("%d", &note);
	
	switch (note)
	{
		case 0: printf("%d Punkte entsprechen der Note: ungenügend", note); break;
		case 1: printf("%d Punkt entspricht der Note: mangelhaft", note); break;
		
		case 2:
		case 3: printf("%d Punkte entsprechen der Note: mangelhaft", note); break;
		
		case 4: 
		case 5:
		case 6: printf("%d Punkte entsprechen der Note: ausreichend", note); break; //case 4&5 haben das gleiche Ergebnis wie 6
		
		case 7:
		case 8: 
		case 9: printf("%d Punkte entsprechen der Note: befriedigend", note); break;
		
		case 10:
		case 11:
		case 12: printf("%d Punkte entsprechen der Note: gut", note); break;
		
		case 13:
		case 14:
		case 15: printf("%d Punkte entsprechen der Note: sehr gut", note); break;
		
		default: printf("%d Punkte konnten keiner Note zugeordnet werden", note); break;
	}
	
	return 0;
}
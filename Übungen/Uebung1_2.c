#include <stdio.h>

int main(void){
	char name[10];
	scanf("%s", &name); // & stellt die Verbindung von der gescannten Eingabe zum char her
	printf("Hallo %s, willkommen an der FHDW Bielefeld! \n", name);

return 0;
}
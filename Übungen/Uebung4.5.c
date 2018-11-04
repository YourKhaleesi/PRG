#include <stdio.h> 
int main() { 
// ... 
	int i = 5, var = 100;
	switch(i) {
		case 0: var /= 2; break; 
		default: var *= 2;
}// ...
	printf("%d", var);
	return 0;
}
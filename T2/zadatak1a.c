/*
Napisati C program koji traži od korisnika da unese dva broja. Ispisati
veći od ta dva broja.

*/

#include <stdio.h>

int main() {
	int a, b;

	
	printf("Unesi a,b");
	scanf("%d,%d", &a, &b);
	
	if (a > b) {
		printf("Veci je a");
	} else if (b > a) {
		printf("Veci je b");
	} else {
		printf("Jednaki su");
	}
	

	return 0;
}
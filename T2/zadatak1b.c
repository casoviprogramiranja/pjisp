/*
Napisati C program koji traži od korisnika da unese tri broja. Ispisati
najmanji od ta tri broja.
*/

#include <stdio.h>


int main() {
	int a, b, c, min;
	
	printf("Unesi a,b,c");
	scanf("%d,%d,%d", &a, &b, &c);

	min = a;
	
	if (b < min) {
		min = b;
	} 
	
	if (c < min) {
		min = c;
	}
	
	printf("Izmedju brojeva %d, %d, %d najmanji je %d", a, b, c, min);
	
	return 0;
}
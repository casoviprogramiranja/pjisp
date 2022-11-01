/*
Realizovati množenje i deljenje pomoću sabiranja i oduzimanja
*/

#include <stdio.h>

int main() {
	
	int a, b;
	int rezMnozenje, rezDeljenje;
	
	printf("Unesi a,b");
	scanf("%d,%d", &a, &b);
	
	do { 
		printf("Unesite delilac: ");
		scanf("%d", &b);
	} while(b == 0);
	rezMnozenje = 0;
	for (i = 0; i < b; ++i) {
		rezMnozenje += a;
	}			
	printf("Rezultat je: %d\n", rezMnozenje);

	
	rezDeljenje = 0;
	while(a>=b)	{
		rezDeljenje +=1;
		a -= b;
	}
	printf("Rezultat je: %d\n", rezDeljenje);
	
	return 0;
}
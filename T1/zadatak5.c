#include <stdio.h>
#include <math.h>
/*Napisati program koji prihvata broj dana kao celobrojnu vrednost i na
osnovu nje izračunava ukupan broj godina, meseci i dana. Uzeti da
godina ima isključivo 365, a mesec 30 dana*/
int main() {
	
	int d;
	
	int brGodina, brMeseci, brDana;
	
	printf("Unesi br dana");
	scanf("%d", &d);
	
	brGodina = d / 365;
	brMeseci = (d - (brGodina * 365) ) / 30;
	brDana = (d - (brGodina * 365) - (brMeseci * 30));

	
	printf("Ukupan broj godina %d \n", brGodina);
	printf("Ukupan broj meseci %d \n", brMeseci);
	printf("Ukupan broj dana %d \n", brDana);
	return 0;
}
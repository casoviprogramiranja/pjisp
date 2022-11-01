/*
Napisati program koji za unetu visinu (u centimetrima) i telesnu težinu
osobe (u kilogramima) ispisuje njen BMI indeks.

*/

#include <stdio.h>
#include <math.h>

int main() {
	
	float visina, tezina;
	float bmi;
	
	printf("Unesi visinu:");
	scanf("%f", &visina);
	
	printf("Unesi tezinu:");
	scanf("%f", &tezina);
	
	if (bmi < 16.5) {
		printf("Veoma neuhranjeno");
	} else if (bmi >= 16.5 && bmi < 18.5){
		printf("Neuhranjeno");
	} else if (bmi >= 18.5 && bmi <= 24.9) {
		printf("Normalno");
	} else if (bmi >= 25 && bmi <= 29.9) {
		printf("Prekomerno");
	} else {
		printf("Gojaznost");
	}

	
	
	return 0;
}
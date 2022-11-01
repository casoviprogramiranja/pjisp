#include <stdio.h>
/*
Jedan radnik određeni posao uradi za M dana, a drugi radnik isti posao
uradi za N dana. Napisati program kojim se određuje za koliko dana bi taj
posao bio završen ako bi radili zajedno. Vrednosti M i N se unose sa
tastature
*/

int main() {
	
	float m;
	float n;
	float ukupno;
	
	printf("Unesi M dana: \n");
	scanf("%f", &m);
	
	printf("Unesi N dana: \n");
	scanf("%f", &n);
	
	ukupno = (m + n) / 2;
	
	printf("Ako bi radini zajedno posao bi zavrsili za %.2f dana", ukupno);
	
	return 0;
}
#include <stdio.h>
/*
Napisati program kojim se vrši prevođenje količine tečnosti iz galona u
litre, ako je 1 galon 4.54 litra. Količina tečnosti u galonima se unosi sa
tastature.
*/
int main() {
	
	float l,g;
	
	printf("Unesi kolicinu tecnosti u galonima");
	scanf("%f", &g);
	
	l = g * 4.54;
	
	printf("%.2f galona je %.2f litara", g, l);
	
	
	
	return 0;
}
#include <stdio.h>
#include <math.h>
/*Izračunati površinu trougla upotrebom Heronovog obrasca.
Proširiti Zadatak 1 tako da se vrednosti stranica trougla unose sa
tastature. Prikaz rezultata površine trougla zaokružiti na dve decimale.
*/
int main() {
	
	float a, b, c;
	float s, p;
	
	printf("Unesi a,b,c");
	scanf("%f,%f,%f", &a, &b, &c);
	
	s = (a + b + c) / 2;
	
	p = sqrt(s*(s-a)*(s-b)*(s-c));
	
	printf("Povrsina je %.2f", p);
	
	return 0;
}
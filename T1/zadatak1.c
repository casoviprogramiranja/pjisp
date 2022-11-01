#include <stdio.h>
#include <math.h>
/*Izračunati površinu trougla upotrebom Heronovog obrasca.*/
int main() {
	
	float a = 2, b = 4, c = 5;
	float s, p;
	
	s = (a + b + c) / 2;
	
	p = sqrt(s*(s-a)*(s-b)*(s-c));
	
	printf("Povrsina je %.2f", p);
	
	return 0;
}
/*
Napisati program koji od korisnika traži da unese tri celobrojne vrednosti,
na osnovu kojih će se izračunati, a zatim ispisati njihova aritmetička,
harmonijska, geometrijska i kvadratna sredina.
*/
#include <stdio.h>
#include <math.h>

int main() {
	
	int a, b, c;
	float ar, g, h, kv;
		
	printf("Unesi a,b,c");
	scanf("%d,%d,%d", &a, &b, &c);
	
	ar = (float)(a + b + c) / 3;
	
	printf("Aritmeticka sredina %.2f \n", ar);
	
	g = pow((a*b*c), 1 / 3);
	printf("Geometrijska sredina %.2f \n", g);
	
	//h = 3 / ((1/(float)a) + (1/(float)b) + (1/(float)c));
	h = 3 / ((1.0/a) + (1.0/b) + (1.0/c));
	printf("Harmonijska sredina %.2f \n", h);
	
	kv = sqrt((pow(a,2) + pow(b,2) + pow(c,2)) / 2);
	printf("Kvadratna sredina %.2f \n", kv);
	
	return 0;
}
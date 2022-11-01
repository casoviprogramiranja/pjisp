/*
Napisati program koji učitava vrednosti promenljivih a i b, a zatim rešava
jednačinu:
ax + b = 0
 x = -b/a
 
 za a = 0 i b=0 jednačina ima beskonacno mnogo resenja
 za a = 0 jednacina nema resenja, deljene nulom nije dozvoljeno
 
*/

#include <stdio.h>
#include <math.h>

int main() {
	
	int a, b;
	int x;
	printf("Unesi a,b");
	scanf("%d,%d", &a, &b);
	
	if (a == 0 && b == 0) {
		printf("Beskonacno mnogo resenja");
	} else if (a == 0 && b != 0) {
		printf("Nema resenja");
	} else {
		x = - b/a;
		printf("Resenje je: %d", x);
	}
	

	
	
	return 0;
}
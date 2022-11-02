/*
Dat je niz X od maksimalno 25 celobrojnih elemenata. Učitati n elemenata
u niz X i formirati nizove A i B, pri čemu su elementi niza A parni, a
elementi niza B negativni elementi niza X. Ispisati nizove X, A i B.

*/

#include <stdio.h>
#define MAX 20


int main() {
	
	int x[MAX], a[MAX], b[MAX] ;
	int i, n, brojacA = 0, brojacB = 0;
	
	do {
		printf("Unesi duzinu niza:");
		scanf("%d", &n);
	} while (n <= 0);
	
	for(i = 0; i < n; i++) {
		printf("Unesi x[%d] =", i);
		scanf("%d", &x[i]);
		if (x[i] % 2 == 0) {
			a[brojacA] = x[i];
			brojacA++;
		}
		
		if (x[i] < 0) {
			b[brojacB] = x[i];
			brojacB++;
		}
	}
	
	printf("Niz A = [");
	for (i = 0; i < brojacA; i++) {
		if (i != brojacA - 1 ) {
			printf(" %d ,", a[i]);
		} else {
			printf(" %d ]", a[i]);
		}
		
	}
	
	printf("Niz B = [");
	for (i = 0; i < brojacB; i++) {
		if (i != brojacB - 1 ) {
			printf(" %d ,", b[i]);
		} else {
			printf(" %d ]", b[i]);
		}
	}
	return 0;
}
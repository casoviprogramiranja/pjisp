/*Dat je niz A od maksimalno 30 celobrojnih elemenata. Učitati n
elemenata, zatim učitati ceo broj br. Na standardnom izlazu ispisati broj
pojavljivanja br u nizu A.
• Primer:
• A = [2, 5, 6, 2, 8, 9, 2]
• br = 2*/

#include <stdio.h>
#define MAX 30
int main() {
	
	int a[MAX];
	int i, br, n, brojac = 0;
	
	do {
		printf("Unesi broj:");
		scanf("%d", &br);
	} while (br <= 0);
	
	do {
		printf("Unesi duzinu niza n:");
		scanf("%d", &n);
	} while (n <= 0);
	
	for(i = 0; i < n; i++) {
		printf("Unesi a[%d] =", i);
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < n; i++) {
		if (a[i] == br) {
			brojac++;
		}
	}
	
	printf("Broj %d se pojavljuje %d puta u nizu a = [", br, brojac);
	for(i = 0; i < n; i++) {
		if (i != n-1) {
			printf(" %d ,", a[i]);
		} else {
			printf(" %d ]", a[i]);
		}
	}
	
	
	return 0;
}

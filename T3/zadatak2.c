/*
Dat je niz od maksimalno 20 realnih elemenata. Učitati n elemenata, a
zatim naći maksimalnu vrednost.

*/
#include <stdio.h>
#define MAX 20

int main() {
	
	int a[MAX];
	int i, n, max;
	
	do {
		printf("Unesi duzinu niza:");
		scanf("%d", &n);
	} while (n <= 0);
	
	for(i = 0; i < n; i++) {
		printf("Unesi a[%d] =", i);
		scanf("%d", &a[i]);
	}
	
	max = a[0];
	
	for(i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	
	printf("Maximum je %d .", max);
	
	return 0;
}
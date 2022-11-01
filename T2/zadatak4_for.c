/*
Sa standardnog ulaza učitati prirodne brojeve N i q. Koristeći while ciklus
ispisati sve brojeve od 2 do N koji su deljivi sa q.
*/

#include <stdio.h>

int main() {
	
	int N, q;
	int i = 2;
	do {
		printf("Unesi N");
		scanf("%d", &N);
	} while(N < 2);
	
	do {
		printf("Unesi q");
		scanf("%d", &q);
	} while(q <= 0);
	
	//8 4
	
	while (i <= N) {
		if ( i % q  == 0) {
			printf("%d je deljivo sa %d \n", i , q);
		}
		i++;
	}
	
	return 0;
}
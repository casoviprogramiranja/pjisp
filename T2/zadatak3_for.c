/*
Napisati program kojim se za celobrojnu vrednost n izračunava njegov
faktorijel.

*/

#include <stdio.h>

int main() {
	
	int n, i;
	int f = 1;
	
	printf("Unesi n");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		f *= i;
	}
	
	printf("Faktorijel je %d", f);
	
	return 0;
}
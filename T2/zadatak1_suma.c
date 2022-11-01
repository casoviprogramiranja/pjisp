/*
Napisati C program koji računa sumu prvih n prirodnih brojeva, pri čemu
se n zadaje na početku programa.

*/

#include <stdio.h>

int main() {
	
	int n, i;
	int s = 0;
	
	printf("Unesi n");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		s += i;
	}
	
	printf("Suma je %d", s);
	
	return 0;
}
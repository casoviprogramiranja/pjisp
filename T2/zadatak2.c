/*
Napisati program kojim se za zadato x izračunava f(x) po formuli:
gcc zadata2.c -lm
*/
#include <stdio.h>
#include <math.h>

int main() {
	
	float x, y;
	
	printf("Unesi x");
	scanf("%f", &x);
	
	if (x < 0) {
		y = -7;
	} else if (x >= 0 && x < 1) {
		y = pow(x, 1/4) + 4;
	} else if (x >= 1 && x < 13) {
		y = 2 * sqrt(x) - 5;
	} else {
		y = pow(x, 2) / 9;
	}
	
	printf("y(%.2f) = %.2f", x, y);
	
	return 0;
}
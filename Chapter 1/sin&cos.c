#include <stdio.h>
#include <math.h>

// input a number and get its sin and cos values.
int main() {
	int n;
	double nsin, ncos;
	scanf("%d", &n);
	if(n < 360) {
		nsin = sin((M_PI*n)/180);
		ncos = cos((M_PI*n)/180);
	}
	printf("%f\n%f\n", nsin, ncos);

	return 0;
}

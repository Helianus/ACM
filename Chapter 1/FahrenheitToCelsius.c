#include <stdio.h>

// Transfer from Fahrenheit to Celsius
int main() {
	int f;
	double c;
	scanf("%d", &f);
	c = 5*((double)f-32)/9;
	printf("%.3f\n", c);
	return 0;
}

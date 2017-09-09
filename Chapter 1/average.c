#include <stdio.h>

// input a, b, c three numbers, and print their average
int main() {
	double a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	double average = (a+b+c)/3.0;
	printf("%d\n", average);
	return 0;
}

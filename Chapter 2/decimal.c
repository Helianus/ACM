#include <stdio.h>

// input positive integers: a, b, c, and ouput: a/b with decimal number c such that 1 6 4, and output should be 0.1667
int main() {

	int a, b, c;
	double s;
	scanf("%d%d%d", &a, &b, &c);
	s = (double)a/(double)b;
	printf("%.*f\n", c, s);
	return 0;
}

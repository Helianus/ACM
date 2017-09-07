#include <stdio.h>
// we all know that chicken has 4 legs and rabbit has two, 
// so if we know how many the two animals are and how many of their legs are
// then we want to get how many of chickens and rabbits.

int main() {
	int a, b, n, m; // a is the chicken, b is rabbits, n is the sum of two animals, m is the sum of their legs
	scanf("%d%d", &n, &m);
	a = (4*n-m)/2;
	b = n-a;
	if(m % 2 == 1 || a < 0 || b < 0)
		printf("No answer\n");
	else
		printf("%d %d\n", a, b);
	return 0;
}

#include <stdio.h>

// One cloth is $95, and if the cost > 300, we can get 85% discount, give the input n.
int main() {
	int	n;
	double m;
	scanf("%d", &n);
	m = n * 95;
	if(m >= 300) {
		m = m * 0.85;
	}
	printf("%.2f\n", m);
}

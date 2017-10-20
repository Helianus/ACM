#include <stdio.h>

int main() {
// find the number such that 153 = 1^3 + 5^3 + 3^3 from 100 to 999
	int a, b, c;
	for(int i = 100; i <= 999; i++) {
		a = i/100%10;
		b = i/10%10;
		c = i%10;
		if(i == a*a*a + b*b*b + c*c*c)
			printf("%d\n", i);
	}
}

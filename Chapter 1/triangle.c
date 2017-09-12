#include <stdio.h>

// input three sides of a triangle, check if they can make a right triangle
int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a+b>c && b+c>a && c+a>b) {
		if(a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
			printf("yes\n");
		else
			printf("no\n");
	}
	else {
		printf("Not a triangle.");
	}
	return 0;
}

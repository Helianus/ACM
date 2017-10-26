#include <stdio.h>

// using 1~9 make three digit-numbers: abc, def, ghi, and each number just use only once which abc:def:ghi = 1:2:3. 
int main() {

	for(int a = 1; a < 10; a++) {
		for(int b = 1; b < 10; b++) {
			if(b == a) continue;
			for(int c = 1; c < 10; c++) {
				if(c == a) continue;
				if(c == b) continue;
				for(int d = 1; d < 10; d++) {
					if(d == a) continue;
					if(d == b) continue;
					if(d == c) continue;
					for(int e = 1; e < 10; e++) {
						if(e == a) continue;
						if(e == b) continue;
						if(e == c) continue;
						if(e == d) continue;
						for(int f = 1; f < 10; f++) {
							if(f == a) continue;
							if(f == b) continue;
							if(f == c) continue;
							if(f == d) continue;
							if(f == e) continue;
							for(int g = 1; g < 10; g++) {
								if(g == a) continue;
								if(g == b) continue;
								if(g == c) continue;
								if(g == e) continue;
								if(g == f) continue;
								for(int h = 1; h < 10; h++) {
									if(h == a) continue;
									if(h == b) continue;
									if(h == c) continue;
									if(h == d) continue;
									if(h == e) continue;
									if(h == f) continue;
									if(h == g) continue;
									for(int i = 1; i < 10; i++) {
										if(i == a) continue;
										if(i == b) continue;
										if(i == c) continue;
										if(i == d) continue;
										if(i == e) continue;
										if(i == f) continue;
										if(i == g) continue;
										if(i == h) continue;

										int abc = 100*a + 10*b + c;
										int def = 100*d + 10*e + f;
										int ghi = 100*g + 10*h + i;

										if(def == 2*abc && ghi == 3*abc)
											printf("%d %d %d\n", abc, def, ghi);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

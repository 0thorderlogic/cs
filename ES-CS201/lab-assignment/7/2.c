#include <stdio.h>

// I have no fucking clue what in the actual fuck I did here
// k bye

int gcd(int n, int m) {
	int fac_n[20], fac_m[20];
	fac_n[0] = n; fac_m[0] = m;

	for (int i = 1, j = 1; i < m, j <= 20; i++, j++)
		if (m%i == 0)
			fac_m[j] = i;

	for (int i = 1, j = 1; i < n, j <= 20; i++, j++)
		if (n%i == 0)
			fac_n[j] = i;
	int max = 0;
	for (int i = 0, j = 0; i < 20, j < 20; i++, j++)
		if (fac_n[i] == fac_m[j] ) 
				max = fac_m[i];
		else 
			--i, --j;
	
	printf("%d", max);
}

int main() {

	gcd ( 54, 24 );

}

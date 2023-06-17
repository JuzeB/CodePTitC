#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int n;
int cnt = 0;

bool isPrime(int n) {
	if (n == 2 || n == 3) return true;
	if (n < 2 || n % 2 == 0 || n % 3 == 0) return false;

	int k = -1;
	do {
		k += 6;
		if (n % k == 0 || n % (k + 2) == 0) break;
	} while (k <= trunc(sqrt(n)));
	return (k > trunc(sqrt(n)));
}

void check(int p) {
	if (cnt == n) return;
	if (isPrime(p)) {
		cnt++;
		printf("%d\n", p);
	}
}

int main() {
	scanf("%d", &n);

	int p = 2;

	while (cnt < n) {
		check(p);
		if (p >= 5) check(p + 2);
		p += (p >= 5) ? 6 : 1;
	}

	return 0;
}
    

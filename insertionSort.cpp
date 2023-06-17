#include<stdio.h>
#include<math.h>

void dao(int *x, int *y) {
	int t = *x; 
	*x = *y;
	*y = t;
}

int tcs(int x) {
	int sum = 0;
	while(x) {
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	int b[n];
	for(int i = 0; i < n; i++) b[i] = tcs(a[i]);
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) if (b[i] > b[j]) {
			dao(&b[i], &b[j]);
			dao(&a[i], &a[j]);
		}
	}
	for(int i = 0; i < n; i++) printf("%d ", a[i]);
}

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main() {
	int t;

	scanf("%d", &t);

	long long arr[92];

	arr[0] = 1;
	arr[1] = 1;

	for (int i = 2; i < 92; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	while (t--) {
		int n;
		scanf("%d", &n);

		printf("%lld", arr[n - 1]);

		printf("\n");

	}

	return 0;
}

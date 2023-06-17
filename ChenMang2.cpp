#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>


#define max(i, j) ((i > j) ? i : j)

int main() {
	int t;

	scanf("%d", &t);



	for (int u = 1; u <= t; u++) {
		int n, m, x;
		scanf("%d %d %d", &n, &m, &x);

		int arr[101];

		int brr[101];

		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}

		for (int i = 0; i < m; i++) {
			scanf("%d", &brr[i]);
		}

		printf("Test %d:\n", u);

		for (int i = 0; i <= x - 1; i++) {
			printf("%d ", arr[i]);
		}

		for (int i = 0; i < m; i++) {
			printf("%d ", brr[i]);
		}

		for (int i = x; i < n; i++) {
			printf("%d ", arr[i]);
		}

		printf("\n");
	}

	return 0;
}


#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>


#define max(i, j) ((i > j) ? i : j)
#define min(i, j) ((i < j) ? i : j)

int main() {
	int t;

	//scanf("%d", &t);

	t = 1;

	while (t--) {
		int n;

		scanf("%d", &n);

		int arr[101];

		for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

		int x;
		scanf("%d", &x);

		for (int i = 1; i <= x; i++) {
			int start = arr[0];
			for (int j = 0; j <= n - 2; j++) arr[j] = arr[j + 1];
			arr[n - 1] = start;
		}

		for (int i = 0; i < n; i++) printf("%d ", arr[i]);

		printf("\n");
	}

	return 0;
}
  

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>



int main() {
	int t;

	//scanf("%d", &t);
	t = 1;


	while (t--) {
		int n;
		scanf("%d", &n);

		int arr[101];

		int maxVal = 0;

		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}

		for (int i = n - 1; i >= 0; i--) {
			printf("%d ", arr[i]);
		}

		printf("\n");
	}

	return 0;
}


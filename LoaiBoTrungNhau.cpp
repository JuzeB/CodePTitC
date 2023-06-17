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



		scanf("%d", &arr[0]);

		int minVal = arr[0];

		int check[100000] = { false };

		for (int i = 1; i < n; i++) {
			scanf("%d", &arr[i]);
		}

		for (int i = 0; i < n; i++) {
			if (check[arr[i]] == false) {
				printf("%d ", arr[i]);
				check[arr[i]] = true;
			}
		}

		printf("\n");
	}

	return 0;
}n

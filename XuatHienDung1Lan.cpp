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

		int dem[100000] = { 0 };
		bool check[100000] = { false };

		int count = 0;

		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			dem[arr[i]]++;

			if (dem[arr[i]] == 1) check[arr[i]] = true;

			if (dem[arr[i]] > 1) {
				check[arr[i]] = false;
			}
		}



		for (int i = 0; i < n; i++) {
			if (check[arr[i]] == true) {
				count++;
			}
		}

		printf("%d\n", count);

		for (int i = 0; i < n; i++) {
			if (check[arr[i]] == true) {
				printf("%d ", arr[i]);
				check[arr[i]] = false;
			}
		}

		printf("\n");
	}

	return 0;
}

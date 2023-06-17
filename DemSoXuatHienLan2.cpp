#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>


#define max(i, j) ((i > j) ? i : j)
#define min(i, j) ((i < j) ? i : j)

int main() {
	int t;

	scanf("%d", &t);

	for (int u = 1; u <= t; u++) {
		int n;
		scanf("%d", &n);

		int arr[101];

		int dem[100000] = { 0 };
		bool check[100000] = { false };

		int count = 0;

		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
			dem[arr[i]]++;

		}

		printf("Test %d:\n", u);

		for (int i = 0; i < n; i++) {
			if (check[arr[i]] == false) {
				printf("%d xuat hien %d lan\n", arr[i], dem[arr[i]]);
				check[arr[i]] = true;
			}
		}


		printf("\n");
	}

	return 0;
}

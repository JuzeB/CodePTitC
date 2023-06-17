#include<stdio.h>
#include<string.h>
#include <stdbool.h>
#include<math.h>

int main() {
	int t;

	scanf("%d", &t);

	while (t--) {
		int n;
		scanf("%d", &n);

		int arr[101];

		for (int i = 0; i < n; i++) {
			scanf("%d", &arr[i]);
		}

		for (int i = 0; i < n; i++) {
			if (arr[i] == 2) printf("%d ", arr[i]);
			else if (arr[i] > 2) {
				bool check = true;
				for (int j = 2; j <= trunc(sqrt(arr[i])); j++) {
					if (arr[i] % j == 0) {
						check = false;
						break;
					}
				}

				if (check == true) printf("%d ", arr[i]);
			}

		}

		printf("\n");

	}

	return 0;
}

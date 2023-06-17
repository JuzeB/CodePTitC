#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

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

		bool check = true;

		for (int i = 0; i < n / 2; i++) {
			if (arr[i] != arr[n - i - 1]) {
				check = false;
				break;
			}

		}

		if (check == true) printf("YES"); else printf("NO");

		printf("\n");

	}

	return 0;
}
           

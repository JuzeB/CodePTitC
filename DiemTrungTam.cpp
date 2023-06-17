#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, i, tam, dem = 0, j;
    scanf("%d", &n);
    int a[n-1], b[n-1];
    
    for (i = 0; i < n-1; i++)
        scanf("%d%d", &a[i], &b[i]);
    
    for (i = 1; i <= n; i++) {
        bool isCenter = true;
        for (j = 0; j < n-1; j++) {
            if (a[j] != i && b[j] != i) {
                isCenter = false;
                break;
            }
        }
        if (isCenter) {
            printf("Yes\n");
            return 0;
        }
    }
    
    printf("No\n");
    return 0;
}

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void rev(int a[], int n) {
    int l = 0, r = n - 1;
    while (l < r) {
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        l++;
        r--;
    }
}

int main() {
    char c[201], b[201], temp[201];
    int a[201], e[200], d[200];
    int i, n = 0;
    scanf("%s", c);
    while (strlen(c) != 1) {
        int n1 = 0;
        int n2 = 0;

        for (i = 0; i < strlen(c) / 2; i++) {
            d[n1++] = c[i] - '0';
        }

        for (i = strlen(c) / 2; i < strlen(c); i++) {
            e[n2++] = c[i] - '0';
        }

        rev(d, n1);
        rev(e, n2);

        if (n2 > n1) {
            d[n1++] = 0;
        }

        int tmp;
        int nho = 0;
        n = 0;

        for (i = 0; i < n1; i++) {
            tmp = d[i] + e[i] + nho;
            a[n++] = tmp % 10;
            nho = tmp / 10;
        }

        if (nho) {
            a[n++] = 1;
        }

        rev(a, n);

        for (i = 0; i < n; i++) {
            b[i] = a[i] + '0';
        }
        b[n] = '\0';

        
        strcpy(c, b);
        printf("%s\n", c);
    }

    return 0;
}





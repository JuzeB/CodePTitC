#include <stdio.h>

void CsHx(long long int Tp) {
    char hexa[100];
    int s = 0;
    
    while (Tp > 0) {
        int thua = Tp % 16;
        if (thua < 10) {
            hexa[s++] = thua + '0';
        } else {
            hexa[s++] = thua + 55;
        }
        Tp /= 16;
    }
    
    for (int i = s - 1; i >= 0; i--) {
        printf("%c", hexa[i]);
    }
    printf("H\n");
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        long long int N;
        scanf("%lld", &N);
        
        CsHx(N);
    }
    
    return 0;
}


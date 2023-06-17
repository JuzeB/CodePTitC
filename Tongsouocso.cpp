#include <stdio.h>

int countDigitsSumDivisibleBy3(int n) {
    int count = 0;
    while (n > 0) {
        count += n % 10;
        n /= 10;
    }
    return count % 3 == 0;
}

int countDivisorsWithSumDivisibleBy3(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (countDigitsSumDivisibleBy3(i))
                count++;
            if (i != n / i && countDigitsSumDivisibleBy3(n / i))
                count++;
        }
    }
    return count;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T > 0) {
        int N;
        scanf("%d", &N);

        int count = countDivisorsWithSumDivisibleBy3(N);
        printf("%d\n", count);

        T--;
    }

    return 0;
}


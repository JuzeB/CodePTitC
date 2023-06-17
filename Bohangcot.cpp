#include <stdio.h>

int tim(int matran[][10], int hang, int cot) {
    int maxSum = 0;
    int row = 0;
    
    for (int i = 0; i < hang; i++) {
        int rowSum = 0;
        for (int j = 0; j < cot; j++) {
            rowSum += matran[i][j];
        }
        
        if (rowSum > maxSum) {
            maxSum = rowSum;
            row = i;
        }
    }
    
    return row;
}

void removeR(int matran[][10], int hang, int cot, int row) {
    for (int i = row; i < cot - 1; i++) {
        for (int j = 0; j < hang; j++) {
            matran[i][j] = matran[i + 1][j];
        }
    }
}

int MaxSum(int matran[][10], int hang, int cot) {
    int maxSum = 0;
    int col = 0;
    
    for (int j = 0; j < cot; j++) {
        int colSum = 0;
        for (int i = 0; i < hang; i++) {
            colSum += matran[i][j];
        }
        
        if (colSum > maxSum) {
            maxSum = colSum;
            col = j;
        }
    }
    
    return col;
}

void removeC(int matran[][10], int hang, int cot, int col) {
    for (int i = 0; i < hang; i++) {
        for (int j = col; j < cot - 1; j++) {
            matran[i][j] = matran[i][j + 1];
        }
    }
}

void printMatrix(int matran[][10], int hang, int cot) {
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", matran[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);
    
    for (int test = 1; test <= T; test++) {
        int N, M;
        scanf("%d %d", &N, &M);
        
        int matran[10][10];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                scanf("%d", &matran[i][j]);
            }
        }
        
        int row = tim(matran, N, M);
        removeR(matran, N, M, row);
        N--;
        
        int col = MaxSum(matran, N, M);
        removeC(matran, N, M, col);
        M--;
        
        printf("Test %d:\n", test);
        printMatrix(matran, N, M);
    }
    
    return 0;
}


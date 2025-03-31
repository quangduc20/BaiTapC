#include <stdio.h>

int main() {
    int m, n;

    // Nhập số hàng và số cột của ma trận
    printf("Nhap so hang va so cot cua ma tran: ");
    scanf("%d %d", &m, &n);

    int A[m][n], B[m][n], C[m][n];

    // Nhập ma trận A
    printf("Nhap ma tran A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Nhập ma trận B
    printf("Nhap ma tran B (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Tính tổng hai ma trận
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // In ma trận kết quả
    printf("Tong hai ma tran la:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

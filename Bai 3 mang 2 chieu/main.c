#include <stdio.h>

int main() {
    int n, m, p;

    // Nhập kích thước của ma trận A và B
    printf("Nhap so hang va cot cua ma tran A (n m): ");
    scanf("%d %d", &n, &m);
    printf("Nhap so cot cua ma tran B (p): ");
    scanf("%d", &p);

    int A[n][m], B[m][p], C[n][p];

    // Nhập ma trận A
    printf("Nhap ma tran A (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Nhập ma trận B
    printf("Nhap ma tran B (%d x %d):\n", m, p);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Khởi tạo ma trận C với giá trị 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    // Tính tích hai ma trận C = A * B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // In ma trận A
    printf("Ma tran A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // In ma trận B
    printf("Ma tran B:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    // In ma trận C (kết quả)
    printf("Ma tran C (ket qua A x B):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

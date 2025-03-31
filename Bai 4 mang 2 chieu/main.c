#include <stdio.h>

int main() {
    int n, i, j;

    // Nhap kich thuoc ma tran
    printf("Nhap kich thuoc ma tran n: ");
    scanf("%d", &n);

    // Khai bao ma tran
    int mang[100][100]; // Gioi han kich thuoc toi da la 100x100

    // Nhap ma tran
    printf("Nhap cac phan tu cho ma tran %dx%d:\n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Nhap phan tu tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }

    // In ma tran ban dau
    printf("\nMa tran vua nhap la:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }

    // In ma tran sau khi xoay 90 do nguoc chieu kim dong ho
    printf("\nMa tran sau khi xoay 90 do nguoc chieu kim dong ho:\n");
    for(j = n-1; j >= 0; j--) { // Duyet cot tu cuoi ve dau
        for(i = 0; i < n; i++) { // Duyet hang tu dau den cuoi
            printf("%d ", mang[i][j]);
        }
        printf("\n");
    }

    return 0;
}

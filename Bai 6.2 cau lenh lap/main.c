#include <stdio.h>

int laSoHoanHao(int n) {
    if (n <= 0) return 0; // Số hoàn hảo phải là số nguyên dương

    int tongUoc = 0;

    // Duyệt từ 1 đến n để tính tổng các ước
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            tongUoc += i;
        }
    }

    // Kiểm tra điều kiện số hoàn hảo
    return (tongUoc == 2 * n);
}

int main() {
    int n;

    // Nhập số nguyên từ bàn phím
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    // Kiểm tra và in kết quả
    if (laSoHoanHao(n)) {
        printf("%d la so hoan hao.\n", n);
    } else {
        printf("%d khong phai la so hoan hao.\n", n);
    }

    return 0;
}

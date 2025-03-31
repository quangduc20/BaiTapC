#include <stdio.h>

// Hàm tính giai thừa
unsigned long long tinhGiaiThua(int n) {
    unsigned long long giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}

int main() {
    int n;
    double S = 1.0; // Khởi tạo với 1 vì 1/1! = 1

    // Nhập số nguyên từ bàn phím
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    // Kiểm tra n hợp lệ
    if (n < 0) {
        printf("Vui long nhap n >= 0.\n");
        return 1;
    }

    // Tính tổng S
    for (int i = 2; i <= n; i++) {
        S += 1.0 / tinhGiaiThua(i);
    }

    // In kết quả
    printf("Tong S = %.6f\n", S); // Hiển thị 6 chữ số thập phân

    return 0;
}

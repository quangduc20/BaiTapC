#include <stdio.h>

int main() {
    int n;
    unsigned long long giaiThua = 1; // Dùng kiểu unsigned long long để tránh tràn số

    // Nhập số nguyên từ bàn phím
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    // Kiểm tra nếu n < 0 thì báo lỗi
    if (n < 0) {
        printf("Khong the tinh giai thua cua so am.\n");
        return 1;
    }

    // Tính giai thừa bằng vòng lặp for
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }

    // In kết quả
    printf("%d! = %llu\n", n, giaiThua);

    return 0;
}

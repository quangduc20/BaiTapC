#include <stdio.h>

double tinhDay(int n) {
    if (n == 1 || n == 2) return 1.0; // F(1) = 1, F(2) = 1

    double a = 1.0, b = 1.0, c;
    for (int i = 3; i <= n; i++) {
        if (b == 0) {  // Tránh chia cho 0
            printf("Loi: Chia cho 0 o buoc n = %d\n", i);
            return 0;
        }
        c = a / b;
        a = b;
        b = c;
    }
    return c;
}

int main() {
    int n;

    // Nhập số nguyên dương n
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap n > 0.\n");
        return 1;
    }

    // In kết quả số thứ n của dãy
    printf("So thu %d cua day la: %.6f\n", n, tinhDay(n));

    return 0;
}

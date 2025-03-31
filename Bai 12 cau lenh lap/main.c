#include <stdio.h>
#include <math.h>

// Hàm tính giai thừa
double tinhGiaiThua(int n) {
    double giaiThua = 1.0;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i;
    }
    return giaiThua;
}

// Hàm tính sin(x) bằng chuỗi Taylor
double tinhSin(double x, double Eps) {
    double term = x;  // Phần tử đầu tiên x^1 / 1!
    double sinx = x;  // Giá trị ban đầu của sin(x)
    int n = 1;        // Bắt đầu từ n = 1 để tính x^3 / 3!

    while (fabs(term) > Eps) { // Lặp đến khi giá trị phần tử nhỏ hơn Eps
        term *= -x * x / ((2 * n) * (2 * n + 1)); // (-1)^n * x^(2n+1) / (2n+1)!
        sinx += term;
        n++;
    }

    return sinx;
}

int main() {
    double x, Eps;

    // Nhập giá trị x và Eps
    printf("Nhap x (radian): ");
    scanf("%lf", &x);
    printf("Nhap do chinh xac Eps: ");
    scanf("%lf", &Eps);

    if (Eps <= 0) {
        printf("Eps phai lon hon 0.\n");
        return 1;
    }

    // Tính sin(x)
    double ketQua = tinhSin(x, Eps);

    // In kết quả
    printf("Gia tri sin(%.6f) = %.6f\n", x, ketQua);

    return 0;
}

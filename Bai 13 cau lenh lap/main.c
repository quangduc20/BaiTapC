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

// Hàm tính e^x bằng chuỗi Taylor
double tinhEx(double x, double eps) {
    double term = 1.0;  // Phần tử đầu tiên x^0 / 0! = 1
    double ex = 1.0;    // Giá trị ban đầu của e^x
    int n = 1;          // Bắt đầu từ n = 1 để tính x^n / n!

    while (fabs(term) > eps) { // Lặp đến khi |term| < eps
        term *= x / n;  // term = x^n / n!
        ex += term;
        n++;
    }

    return ex;
}

int main() {
    double x, eps;

    // Nhập giá trị x và eps từ bàn phím
    printf("Nhap x: ");
    scanf("%lf", &x);
    printf("Nhap do chinh xac eps: ");
    scanf("%lf", &eps);

    if (eps <= 0) {
        printf("Eps phai lon hon 0.\n");
        return 1;
    }

    // Tính e^x
    double ketQua = tinhEx(x, eps);

    // In kết quả
    printf("e mu %.6f = %.6f\n", x, ketQua);

    return 0;
}

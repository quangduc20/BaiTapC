#include <stdio.h>
#include <math.h>

int main() {
    double A, r = 0.0045; // Lãi suất 0.45% mỗi tháng (tương đương 0.0045)
    int n;

    // Nhập số tiền ban đầu và số tháng gửi
    printf("Nhap so tien gui ban dau (A): ");
    scanf("%lf", &A);
    printf("Nhap so thang gui (n): ");
    scanf("%d", &n);

    // Tính số tiền sau n tháng theo công thức lãi kép
    double An = A * pow(1 + r, n);

    // In kết quả
    printf("So tien sau %d thang: %.2lf VND\n", n, An);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Nhap ba canh tam giac: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Ba so nhap vao tao thanh mot tam giac\n");

        if (a == b && b == c) {
            printf("Tam giac deu\n");
        } else if (a == b || b == c || a == c) {
            if (fabs(a * a + b * b - c * c) < 1e-6 ||
                fabs(a * a + c * c - b * b) < 1e-6 ||
                fabs(b * b + c * c - a * a) < 1e-6) {
                printf("Tam giac vuong can\n");
            } else {
                printf("Tam giac can\n");
            }
        } else if (fabs(a * a + b * b - c * c) < 1e-6 ||
                   fabs(a * a + c * c - b * b) < 1e-6 ||
                   fabs(b * b + c * c - a * a) < 1e-6) {
            printf("Tam giac vuong\n");
        } else {
            printf("Tam giac thuong\n");
        }

        double p = (a + b + c) / 2;
        double dienTich = sqrt(p * (p - a) * (p - b) * (p - c));
        double chuVi = a + b + c;

        printf("Chu vi tam giac: %lf\n", chuVi);
        printf("Dien tich tam giac: %lf\n", dienTich);
    } else {
        printf("Ba so nhap vao khong tao thanh tam giac\n");
    }

    return 0;
}

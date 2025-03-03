#include <stdio.h>

int main() {
    double x;
    printf("Nhap vao 1 so bat ky: ");
    scanf("%lf", &x);

    double x2 = x * x;
    double x3 = x * x * x;
    double x4 = x * x * x * x;

    printf("Gia tri %.f^2 = %.f\n", x, x2);
    printf("Gia tri %.f^3 = %.f\n", x, x3);
    printf("Gia tri %.f^4 = %.f\n", x, x4);

    return 0;
}

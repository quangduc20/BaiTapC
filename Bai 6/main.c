#include <stdio.h>

int main() {
    double a, b, c, d, e, f;
    double x, y, det, detX, detY;

    printf("Nhap he so a, b, c, d, e, f: ");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    det = a * e - b * d;
    detX = c * e - b * f;
    detY = a * f - c * d;

    if (det != 0) {
        x = detX / det;
        y = detY / det;
        printf("He phuong trinh co nghiem: x = %lf, y = %lf\n", x, y);
    } else {
        if (detX == 0 && detY == 0) {
            printf("He phuong trinh co vo so nghiem.\n");
        } else {
            printf("He phuong trinh vo nghiem.\n");
        }
    }

    return 0;
}

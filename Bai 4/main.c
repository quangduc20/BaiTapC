#include <stdio.h>
#define PI 3.14159265359

int main() {
    double r, surface_area, volume;

    printf("Nhap ban kinh hinh cau: ");
    scanf("%lf", &r);

    surface_area = 4 * PI * r * r;
    volume = (4.0 / 3.0) * PI * r * r * r;

    printf("Dien tich mat cau: %.2lf\n", surface_area);
    printf("The tich hinh cau: %.2lf\n", volume);

    return 0;
}

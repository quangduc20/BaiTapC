#include <stdio.h>

int main() {
    int day, month, year;

    printf("Nhap ngay: ");
    scanf("%d", &day);

    printf("Nhap thang: ");
    scanf("%d", &month);

    printf("Nhap nam: ");
    scanf("%d", &year);

    printf("Hom nay la ngay %d/%d/%d\n", day, month, year);

    return 0;
}

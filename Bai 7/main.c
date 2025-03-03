#include <stdio.h>

int main() {
    double diem;

    printf("Nhap vao diem so: ");
    scanf("%lf", &diem);

    if (diem < 5) {
        printf("Xep loai: Yeu\n");
    } else if (diem >= 5 && diem < 7) {
        printf("Xep loai: TB\n");
    } else if (diem >= 7 && diem < 8) {
        printf("Xep loai: Kha\n");
    } else if (diem >= 8 && diem < 9) {
        printf("Xep loai: Gioi\n");
    } else if (diem >= 9) {
        printf("Xep loai: Xuat sac\n");
    } else {
        printf("Diem khong hop le\n");
    }

    return 0;
}

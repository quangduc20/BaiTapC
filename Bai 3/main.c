#include <stdio.h>

int main() {
    int a, b;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("%d / %d = %d\n", a, b, a / b);
        printf("Phep chia hai so nguyen se lay phan nguyen cua ket qua.\n");
    } else {
        printf("Khong the chia cho 0!\n");
    }

    return 0;
}

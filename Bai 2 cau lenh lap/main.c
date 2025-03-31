#include <stdio.h>

int main() {
    int n, i, laSoNguyenTo = 1;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n < 2) {
        laSoNguyenTo = 0;
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                laSoNguyenTo = 0;
                break;
            }
        }
    }

    if (laSoNguyenTo) {
        printf("%d la so nguyen to\n", n);
    } else {
        printf("%d khong phai la so nguyen to\n", n);
    }

    return 0;
}

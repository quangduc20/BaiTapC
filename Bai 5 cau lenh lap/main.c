#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Nhập số nguyên từ bàn phím
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    printf("Cac uoc cua %d la: ", n);

    // Duyệt từ -|n| đến |n| để tìm các ước, bỏ qua 0
    for (int i = -abs(n); i <= abs(n); i++) {
        if (i != 0 && n % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n"); // Xuống dòng sau khi in xong

    return 0;
}

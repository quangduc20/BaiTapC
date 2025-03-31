#include <stdio.h>

int main() {
    int sum = 0, num;

    printf("Nhap vao 10 so nguyen:\n");

    for (int i = 1; i <= 10; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    printf("Tong cua 10 so da nhap la: %d\n", sum);

    return 0;
}

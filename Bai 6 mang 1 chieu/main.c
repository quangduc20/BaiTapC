#include <stdio.h>

int main() {
    int n;

    // Nhập số phần tử của mảng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập giá trị cho mảng
    printf("Nhap %d so nguyen: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Thay thế các phần tử âm bằng 0
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    // In mảng sau khi thay thế
    printf("Mang sau khi thay the cac so am bang 0: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}

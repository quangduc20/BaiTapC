#include <stdio.h>

int main() {
    int n, x, count = 0;

    // Nhập số phần tử của mảng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập giá trị cho mảng
    printf("Nhap %d so nguyen: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Nhập giá trị cần tìm
    printf("Nhap gia tri x can tim: ");
    scanf("%d", &x);

    // Đếm số lần xuất hiện của x
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            count++;
        }
    }

    // In kết quả
    printf("\nSo %d xuat hien %d lan trong mang.\n", x, count);

    return 0;
}

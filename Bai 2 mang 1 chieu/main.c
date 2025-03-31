#include <stdio.h>

int main() {
    // Khai báo mảng số nguyên gồm 10 phần tử
    int arr[10];

    // Nhập giá trị cho mảng
    printf("Nhap 10 so nguyen: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // In mảng theo chiều nhập vào
    printf("Mang vua nhap: ");
    for (int i = 0; i < 10; i++) {
        printf("%d\t", arr[i]);
    }

    // In mảng theo chiều đảo ngược
    printf("\nMang dao nguoc: ");
    for (int i = 9; i >= 0; i--) {
        printf("%d\t", arr[i]);
    }

    printf("\n"); // Xuống dòng sau khi in xong
    return 0;
}

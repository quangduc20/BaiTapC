#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]); // Hoán đổi nếu phần tử trước lớn hơn phần tử sau
            }
        }
    }
}

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

    // Sắp xếp mảng theo thứ tự tăng dần
    bubbleSort(arr, n);

    // In mảng đã sắp xếp
    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

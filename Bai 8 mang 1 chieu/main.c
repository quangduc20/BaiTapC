#include <stdio.h>

// Hàm ghép hai mảng đã sắp xếp vào mảng mới cũng sắp xếp tăng dần
void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;

    // Duyệt cả hai mảng và trộn vào mảng kết quả
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    // Nếu mảng arr1 còn phần tử, thêm vào mảng kết quả
    while (i < n1) {
        result[k++] = arr1[i++];
    }

    // Nếu mảng arr2 còn phần tử, thêm vào mảng kết quả
    while (j < n2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int n1, n2;

    // Nhập số phần tử của mảng 1
    printf("Nhap so phan tu cua mang 1: ");
    scanf("%d", &n1);
    int arr1[n1];

    // Nhập mảng 1 đã sắp xếp tăng dần
    printf("Nhap %d so nguyen cua mang 1 (tang dan): ", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Nhập số phần tử của mảng 2
    printf("Nhap so phan tu cua mang 2: ");
    scanf("%d", &n2);
    int arr2[n2];

    // Nhập mảng 2 đã sắp xếp tăng dần
    printf("Nhap %d so nguyen cua mang 2 (tang dan): ", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Mảng kết quả có kích thước n1 + n2
    int result[n1 + n2];

    // Gọi hàm ghép mảng
    mergeArrays(arr1, n1, arr2, n2, result);

    // In mảng sau khi ghép
    printf("Mang sau khi ghep: ");
    for (int i = 0; i < (n1 + n2); i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

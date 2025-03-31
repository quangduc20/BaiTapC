#include <stdio.h>

int main() {
    int n;

    // Nhập kích thước mảng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập mảng từ bàn phím
    printf("Nhap %d so nguyen: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Khởi tạo giá trị lớn nhất, nhỏ nhất và vị trí tương ứng
    int max_val = arr[0], min_val = arr[0];
    int max_index = 0, min_index = 0;

    // Duyệt mảng để tìm giá trị lớn nhất, nhỏ nhất
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_index = i;
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_index = i;
        }
    }

    // In kết quả
    printf("\nPhan tu lon nhat: %d o vi tri %d", max_val, max_index + 1);
    printf("\nPhan tu nho nhat: %d o vi tri %d\n", min_val, min_index + 1);

    return 0;
}

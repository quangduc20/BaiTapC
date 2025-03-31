#include <stdio.h>

int main() {
    int n;

    // Nhập kích thước mảng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n]; // Khai báo mảng có n phần tử
    int sum_all = 0, sum_pos = 0, sum_neg = 0; // Tổng các số
    int count_pos = 0, count_neg = 0; // Đếm số dương, số âm

    // Nhập giá trị cho mảng
    printf("Nhap %d so nguyen: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        sum_all += arr[i]; // Tổng tất cả các số

        if (arr[i] > 0) { // Nếu là số dương
            sum_pos += arr[i];
            count_pos++;
        } else if (arr[i] < 0) { // Nếu là số âm
            sum_neg += arr[i];
            count_neg++;
        }
    }

    // Tính trung bình cộng (nếu có số dương hoặc số âm)
    double avg_all = (double)sum_all / n;
    double avg_pos = (count_pos > 0) ? (double)sum_pos / count_pos : 0;
    double avg_neg = (count_neg > 0) ? (double)sum_neg / count_neg : 0;

    // In kết quả
    printf("\nTong tat ca cac so: %d", sum_all);
    printf("\nTong cac so duong: %d", sum_pos);
    printf("\nTong cac so am: %d", sum_neg);
    printf("\nTrung binh cong tat ca: %.2lf", avg_all);
    printf("\nTrung binh cong so duong: %.2lf", avg_pos);
    printf("\nTrung binh cong so am: %.2lf\n", avg_neg);

    return 0;
}


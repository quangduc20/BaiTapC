#include <stdio.h>

int main() {
    int N;
    double S = 0.0; // Dùng kiểu double để lưu kết quả chính xác hơn

    // Nhập giá trị N từ bàn phím
    printf("Nhap so nguyen duong N: ");
    scanf("%d", &N);

    // Kiểm tra N có hợp lệ không
    if (N <= 0) {
        printf("Vui long nhap N > 0.\n");
        return 1;
    }

    // Tính tổng S
    for (int i = 1; i <= N; i++) {
        S += 1.0 / i; // Chia cho i phải có dạng số thực để tránh lỗi chia nguyên
    }

    // In kết quả
    printf("Tong S = %.6f\n", S); // Hiển thị 6 chữ số thập phân

    return 0;
}

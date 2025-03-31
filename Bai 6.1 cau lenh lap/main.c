#include <stdio.h>

// Hàm tìm ước chung lớn nhất (ƯCLN) bằng thuật toán Euclid
int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm tìm bội chung nhỏ nhất (BCNN)
int BCNN(int a, int b) {
    return (a * b) / UCLN(a, b); // Công thức BCNN(a, b) = |a*b| / UCLN(a, b)
}

int main() {
    int a, b;

    // Nhập hai số nguyên từ bàn phím
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);

    // Tìm ƯCLN và BCNN
    int ucln = UCLN(a, b);
    int bcnn = BCNN(a, b);

    // In kết quả
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln);
    printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, bcnn);

    return 0;
}

#include <stdio.h>

// Hàm chuyển số n sang hệ nhị phân
void doiNhiPhan(int n) {
    int binary[32], i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    printf("He nhi phan: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

// Hàm chuyển số n sang hệ bát phân (cơ số 8)
void doiBatPhan(int n) {
    int octal[32], i = 0;
    while (n > 0) {
        octal[i] = n % 8;
        n /= 8;
        i++;
    }
    printf("He bat phan: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");
}

// Hàm chuyển số n sang hệ thập lục phân (cơ số 16)
void doiThapLucPhan(int n) {
    char hex[32];
    int i = 0;
    while (n > 0) {
        int temp = n % 16;
        if (temp < 10)
            hex[i] = temp + '0'; // Chuyển số 0-9 thành ký tự
        else
            hex[i] = temp - 10 + 'A'; // Chuyển số 10-15 thành A-F
        n /= 16;
        i++;
    }
    printf("He thap luc phan: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");
}

int main() {
    int n;

    // Nhập số nguyên dương n từ bàn phím
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }

    // Gọi các hàm chuyển đổi
    doiNhiPhan(n);
    doiBatPhan(n);
    doiThapLucPhan(n);

    return 0;
}

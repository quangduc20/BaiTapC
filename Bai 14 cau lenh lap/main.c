#include <stdio.h>

int main() {
    float gdp = 125; // GDP nam 2014
    int nam = 2014;  // Bat dau tu nam 2014
    float tang_truong = 0.1; // Toc do tang truong 10% moi nam
    float gdp_2014_x2 = 125 * 2; // GDP nam 2014 nhan 2 = 250

    // In tieu de
    printf("In ra man hinh thu nhap GDP cua cac nam theo dang:\n");

    // In tieu de bang
    printf("Nam      GDP\n");

    // Vong lap de tinh va in GDP qua cac nam
    while (gdp <= gdp_2014_x2) {
        printf("%d     %.1f\n", nam, gdp); // In dong du lieu, can chinh cot
        gdp = gdp * (1 + tang_truong); // Tang GDP len 10% moi nam
        nam++; // Tang nam
    }

    // In cau ket thuc
    printf("Cho den nam co GDP > 2 lan nam 2014 thi dung.\n");

    return 0;
}

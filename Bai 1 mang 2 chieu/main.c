#include <stdio.h>

int main() {
    // Khai bao mang 2 chieu 3x3
    int mang[3][3];

    // In tieu de
    printf("Khai bao mang hai chieu co kich thuoc 3x3. In mang ra man hinh theo hai truong hop:\n");

    // Truong hop 1: Gia tri cac phan tu duoc khai bao san
    printf("\nTH 1: gia tri cac phan tu mang duoc khai bao khi khai bao mang\n");
    int mang1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // In mang 1
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d   ", mang1[i][j]); // Can chinh khoang cach bang 3 khoang trang
        }
        printf("\n");
    }

    // Truong hop 2: Gia tri cac phan tu duoc nhap tu ban phim
    printf("\nTH 2: gia tri cac phan tu cua mang duoc nhap vao tu ban phim\n");

    // Nhap mang
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Nhap phan tu mang[%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }

    // In mang
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d   ", mang[i][j]); // Can chinh khoang cach bang 3 khoang trang
        }
        printf("\n");
    }

    return 0;
}

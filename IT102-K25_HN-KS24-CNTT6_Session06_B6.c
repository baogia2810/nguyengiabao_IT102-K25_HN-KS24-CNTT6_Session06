#include <stdio.h>

int main() {
    float a, b;
    int choice;

    while (1) {
        printf("\nCALCULATOR\n");
        printf("1. Tong 2 so\n");
        printf("2. Hieu 2 so\n");
        printf("3. Tich 2 so\n");
        printf("4. Thuong 2 so\n");
        printf("5. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Tam biet!\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Lua chon khong hop le! Vui long chon lai.\n");
            continue;
        }

        printf("Nhap so thu nhat: ");
        scanf("%f", &a);
        printf("Nhap so thu hai: ");
        scanf("%f", &b);

        switch (choice) {
            case 1:
                printf("Tong 2 so la %.2f\n", a + b);
                break;
            case 2:
                printf("Hieu 2 so la %.2f\n", a - b);
                break;
            case 3:
                printf("Tich 2 so la %.2f\n", a * b);
                break;
            case 4:
                if (b != 0) {
                    printf("Thuong 2 so la %.2f\n", a / b);
                } else {
                    printf("Khong the chia cho 0!\n");
                }
                break;
        }
    }

    return 0;
}
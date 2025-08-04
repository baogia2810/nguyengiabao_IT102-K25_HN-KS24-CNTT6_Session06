#include <stdio.h>

int main() {
    float a, b, c;
    int choice;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Tam biet!\n");
            break;
        }

        if (choice < 1 || choice > 6) {
            printf("Lua chon khong hop le! Vui long chon lai.\n");
            continue;
        }

        if (choice == 1) {
            printf("Nhap so thu nhat: ");
            scanf("%f", &a);
            printf("Nhap so thu hai: ");
            scanf("%f", &b);
            printf("Nhap so thu ba: ");
            scanf("%f", &c);
        } else if (choice >= 2 && (a == 0 && b == 0 && c == 0)) {
            printf("Vui long nhap 3 so truoc!\n");
            continue;
        }

        switch (choice) {
            case 2:
                printf("Tong 3 so la %.2f\n", a + b + c);
                break;
            case 3:
                printf("Trung binh cong 3 so la %.2f\n", (a + b + c) / 3);
                break;
            case 4:
                float min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
                printf("So nho nhat la %.2f\n", min);
                break;
            case 5:
                float max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
                printf("So lon nhat la %.2f\n", max);
                break;
        }
    }

    return 0;
}
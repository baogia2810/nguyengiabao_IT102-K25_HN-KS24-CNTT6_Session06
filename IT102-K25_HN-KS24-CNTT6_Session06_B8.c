#include <stdio.h>

int main() {
    int a, b, max, lcm;
    printf("Nhap so nguyen duong thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu hai: ");
    scanf("%d", &b);

    max = (a > b) ? a : b;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("Boi chung nho nhat la %d\n", lcm);

    return 0;
}
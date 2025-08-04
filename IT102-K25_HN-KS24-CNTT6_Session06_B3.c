#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    printf("Tong tu 1 den %d la:%d\n", n, total);

    return 0;
}
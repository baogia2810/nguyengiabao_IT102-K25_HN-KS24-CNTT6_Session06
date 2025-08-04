#include<stdio.h>
int main() {
    int chose;
    printf("Moi ban nhap vao mot so nguyen duong(tu 1 - 10):");
    scanf("%d",&chose);
    for (int i=1;i<=10;i++) {
        printf("%d * %d = %d\n",chose,i,chose*i);
    }
    return 0;
}
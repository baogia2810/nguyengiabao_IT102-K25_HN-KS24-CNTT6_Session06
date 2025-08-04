#include<stdio.h>
int main() {
    int result=50;
    int chose;
    while (chose!=result) {
        printf("\nMoi ban nhap so:");
        scanf("%d",&chose);
        if(chose>result) {
            printf("So lon hon ket qua dua ra roi\n");
        }else if(chose<result) {
            printf("So nho hon ket qua dua ra roi\n");
        }else {
            printf("Bingo\n");
        }
    }
    return 0;
}

#include <stdio.h>

int main() {
    int number;
    printf("Nhap so nguyen: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d la so nguyen duong\n", number);
    } else if (number < 0) {
        printf("%d la so nguyen am\n", number);
    } else {
        printf("%d la so khong\n", number);
    }

    return 0;
}

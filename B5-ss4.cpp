#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("So nguyen thu 1: ");
    scanf("%d", &num1);
    printf("So nguyen thu 2: ");
    scanf("%d", &num2);
    printf("So nguyen thu 3: ");
    scanf("%d", &num3);

    if ((num3 > num1 && num3 < num2) || (num3 < num1 && num3 > num2)) {
        printf("So thu 3 nam trong khoang giua so thu 2 va 1\n");
    } else {
        printf("So thu 3 khong nam trong khoang giua so thu 2 va 1\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int day, month, year;
    printf("Nhap vao ngay: ");
    scanf("%d", &day);
    printf("Nhap vao thang: ");
    scanf("%d", &month);
    printf("Nhap vao nam: ");
    scanf("%d", &year);

    // Kiem tra thang có hop le khong
    if (month < 1 || month > 12) {
        printf("Ngay %d/%d/%d khong hop le\n", day, month, year);
    } else {
        int isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

        // Kiem tra ngay có hop le khong
        if (day < 1) {
            printf("Ngay %d/%d/%d khong hop le\n", day, month, year);
        } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
            printf("Ngay %d/%d/%d khong hop le\n", day, month, year);
        } else if (month == 2) {
            // Kiem tra ngay cho thang 2
            if (isLeap && day > 29) {
                printf("Ngay %d/%d/%d khong hop le\n", day, month, year);
            } else if (!isLeap && day > 28) {
                printf("Ngay %d/%d/%d khong hop le\n", day, month, year);
            } else {
                printf("Ngay %d/%d/%d la hop le\n", day, month, year);
            }
        } else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31) {
            printf("Ngay %d/%d/%d khong hop le\n", day, month, year);
        } else {
            printf("Ngay %d/%d/%d la hop le\n", day, month, year);
        }
    }

    return 0;
}

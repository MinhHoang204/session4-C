#include <stdio.h>

int main() {
    int a, b, c;
    printf("Nhap vao ba so nguyen: ");
    scanf("%d %d %d", &a, &b, &c);

    // So sanh va sap xep `a` và `b`
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    // So sanh va sap xep `a` va `c`
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    
    // So sanh va sap xep `b` va `c`
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("Thu tu tu nho den lon: %d %d %d\n", a, b, c);
    return 0;
}

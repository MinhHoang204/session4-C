#include <stdio.h>
int main() {
    int chisocu, chisomoi, chisothang, tiendien;
    printf("Chi so cu: ");
    scanf("%d", &chisocu);
    printf("Chi so moi: ");
    scanf("%d", &chisomoi);

    if (chisocu > chisomoi) {
        printf("Chi so dien khong hop le\n");
        return 0;
    }

    chisothang = chisomoi - chisocu;

    if (chisothang <= 50) {
        tiendien = chisothang * 10000;
    } else if (chisothang <= 100) {
        tiendien = 50 * 10000 + (chisothang - 50) * 15000;
    } else if (chisothang <= 150) {
        tiendien = 50 * 10000 + 50 * 15000 + (chisothang - 100) * 20000;
    } else if (chisothang <= 200) {
        tiendien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (chisothang - 150) * 25000;
    } else {
        tiendien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (chisothang - 200) * 30000;
    }

    printf("Tien dien thang: %d\n", tiendien);
    return 0;
}

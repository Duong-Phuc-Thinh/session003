#include <stdio.h>

int main() {
    float base, height, area;

    printf("Nhap do dài canh day (cm): ");
    scanf("%f", &base);

    printf("Nhap chieu cao (cm): ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("Dien tich tam giac la: %.2f cm^2\n", area);

    return 0;
}

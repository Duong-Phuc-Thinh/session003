#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, circumference, area;

    printf("Nhap ban kinh hinh tron (r): ");
    scanf("%f", &radius);

    // T�nh chu vi v� dien t�ch h�nh tr�n
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;
}

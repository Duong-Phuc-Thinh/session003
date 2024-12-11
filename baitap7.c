#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999) {
        printf("Vui long nhap mot so nguyen có 4 chu s?!\n");
        return 1;
    }

    while (number != 0) {
        sum += number % 10;
        number /= 10;       
    }

    printf("Tong cac chu so la: %d\n", sum);

    return 0;
}


#include <stdio.h>

int main() {
    float math, literature, english;
    float total, average;

    printf("Nhap diem Toan: ");
    scanf("%f", &math);

    printf("Nhap diem Van: ");
    scanf("%f", &literature);

    printf("Nhap diem Anh: ");
    scanf("%f", &english);

    total = math + literature + english;
    average = total / 3;

    printf("Tong diem: %.2f\n", total);
    printf("Ðiem trung binh: %.2f\n", average);

    return 0;
}


#include <stdio.h>
#include <math.h> 
void bai3_GiaiPhuongTrinhBac2() {
    float a, b, c;

    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            printf("Phuong trinh co 1 nghiem: x = %.2f\n", -c / b);
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta < 0) {
            printf("Phuong trinh vo nghiem thuc.\n");
        } else if (delta == 0) {
            printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", -b / (2 * a));
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
}
int main() {
    bai3_GiaiPhuongTrinhBac2();
    return 0;
}

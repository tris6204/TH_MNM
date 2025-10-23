#include <stdio.h> 
#include <stdlib.h> 
void cau3_XepLoaiHocLuc() {
    float van, toan, anh;
    printf("Nhap diem Van: "); 
    scanf("%f", &van);
    printf("Nhap diem Toan: "); 
    scanf("%f", &toan);
    printf("Nhap diem Anh: "); 
    scanf("%f", &anh);
    float diemCuoiKy = (van * 2 + toan * 2 + anh) / 5.0;
    printf("Diem cuoi ky (Van*2 + Toan*2 + Anh)/5 = %.2f\n", diemCuoiKy);
    if (diemCuoiKy < 3.0) {
        printf("Xep loai: Yeu\n");
    } 
    else if (diemCuoiKy < 5.0) { 
        printf("Xep loai: Trung binh\n");
    } 
    else if (diemCuoiKy <= 7.9) { 
        printf("Xep loai: Kha\n");
    } 
    else { 
        printf("Xep loai: Gioi\n");
    }
}
int main() {
    cau3_XepLoaiHocLuc();   
    return 0; 
}

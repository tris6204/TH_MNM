#include <stdio.h>
void in_bang_cuu_chuong(int so, int gioi_han) {
    if (so <= 0 || gioi_han <= 0) return;
    for (int i = 1; i <= gioi_han; ++i) {
        printf("%d x %d = %d\n", so, i, so * i);
    }
}
void in_cac_bang(int n, int gioi_han) {
    if (n <= 0) {
        printf("Giá trị n phải là số nguyên dương.\n");
        return;
    }
    for (int i = 1; i <= n; ++i) {
        printf("\nBẢNG CỬU CHƯƠNG %d:\n", i);
        in_bang_cuu_chuong(i, gioi_han);
    }
}
int main(void) {
    int n, m;
    printf("Nhập số bảng cửu chương cần in (n): ");
    if (scanf("%d", &n) != 1) return 0;
    printf("Muốn in tới bao nhiêu (ví dụ 10): ");
    if (scanf("%d", &m) != 1) m = 10;

    in_cac_bang(n, m);
    return 0;
}

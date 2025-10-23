#include <stdio.h>

void bai8_VeHinhSo() {
    int n;
    printf("--- Bai 8: Ve hinh tam giac so ---\n");
    printf("Moi nhap chieu cao n (vd: 5): ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) { 
        
        for (int j = 1; j <= i; j++) { 
            printf("%d", j);
        }
        
        printf("\n");
    }
}

int main() {
    bai8_VeHinhSo();
    return 0;
}

#include <stdio.h>
void print_table_of(int x, int max_multiplier) {
    if (x <= 0 || max_multiplier <= 0) return;
    for (int j = 1; j <= max_multiplier; ++j) {
        printf("%d x %d = %d\n", x, j, x * j);
    }
}
void print_tables_up_to(int n, int max_multiplier) {
    if (n <= 0) {
        printf("Gia tri n phai la so nguyen duong.\n");
        return;
    }
    for (int i = 1; i <= n; ++i) {
        printf("Bang cuu chuong %d:\n", i);
        print_table_of(i, max_multiplier);
        printf("\n");
    }
}
int main(void) {
    int n, m;
    printf("Nhap so bang cuu chuong can in (n): ");
    if (scanf("%d", &n) != 1) return 0;
    printf("Muon in toi 10 hay toi bao nhieu (nhap m, e.g. 10): ");
    if (scanf("%d", &m) != 1) m = 10;
    print_tables_up_to(n, m);
    return 0;
}


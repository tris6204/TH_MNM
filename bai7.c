void nhapTu1DenN() {
    int n, i, x;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        do {
            printf("Nhap so thu %d: ", i);
            scanf("%d", &x);
        } while (x != i);
    }
    printf("Ban da nhap dung thu tu!\n");
}
